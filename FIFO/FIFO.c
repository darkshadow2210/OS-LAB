#include <stdio.h>
#include <conio.h>

int i, j, nof, nor, flag = 0, ref[50], frm[50], pf = 0, victim = -1;

int main() {
    printf("\n\t\t\t FIFO PAGE REPLACEMENT ALGORITHM: ");

    printf("\n Enter no. of frames: ");
    scanf("%d", &nof);

    printf("Enter no. of reference strings: ");
    scanf("%d", &nor);

    printf("\n Enter the reference string: ");
    for (i = 0; i < nor; i++) {
        scanf("%d", &ref[i]);
    }

    printf("\n The given reference string: ");
    for (i = 0; i < nor; i++) {
        printf("%4d", ref[i]);
    }

    for (i = 0; i < nof; i++) {
        frm[i] = -1;
    }

    printf("\n");

    for (i = 0; i < nor; i++) {
        flag = 0;

        printf("\n\t Reference no.%d->\t", ref[i]);

        for (j = 0; j < nof; j++) {
            if (frm[j] == ref[i]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            pf++;
            victim++;
            victim = victim % nof;
            frm[victim] = ref[i];
        }
        for (j = 0; j < nof; j++) {
            if (frm[j] != -1)
                printf("%d ", frm[j]);
            else
                printf("- ");
        }
    }

    printf("\n\n\t\t No. of page faults: %d\n", pf);

    return 0;
}

