#include <stdio.h>                                                              // เรียกใช้ไลบรารีมาตรฐาน

int main(){                                                                     // ฟังก์ชันหลักของโปรแกรม
    int start, stop;                                                            // ประกาศตัวแปรสำหรับเก็บค่าจุดเริ่มต้นและจุดสิ้นสุด
    printf("Enter start number: ");                                             //แสดงข้อความ Enter start number:
    scanf("%d", &start);                                                        // รับค่าจากผู้ใช้
    printf("Enter stop number: ");                                              //แสดงข้อความ Enter stop number:
    scanf("%d", &stop);                                                         // รับค่าจากผู้ใช้
                           
    printf("Start number is %d and stop number is %d\n", start, stop);          // แสดงค่าจุดเริ่มต้นและจุดสิ้นสุด
    printf("---------------\n");                                                // แสดงเส้นคั่น
    printf("Sequence from start to stop:");                                     // แสดงข้อความ Sequence from start to stop:
        for (int i = start; i <= stop; i++){                                    //ใช่ for loop ในการวนลูปจาก start ถึง stop
            printf(" %d", i);                                                   // แสดงค่าปัจจุบันในลูป
        }
            printf("\nThank you.\n\n");                                         // แสดงข้อความขอบคุณ

    return 0;                                                                   // คืนค่าศูนย์เพื่อบอกว่าการทำงานเสร็จสมบูรณ์
}

// อธิบายการทำงานของโปรแกรม:
//1. รับค่าจากจุดเริ่มต้นและจุดสิ้นสุดจากผู้ใช้
//2. จะแสดงค่าที่ผู้ใช้ป้อนทั้งจุดเริ่มต้นและจุดสิ้นสุดจากนั้นจะแสดงเส้นคั่นเพื่อความชัดเจน
//3. แสดงข้อความ Sequence from start to stop: ต่อด้วยลำดับตัวเลขจากจุดเริ่มต้นถึงจุดสิ้นสุดโดยใช้ for loop
//4. แสดงข้อความขอบคุณเมื่อจบการทำงาน

