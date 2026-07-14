; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_1000a930(short *param_1)
;
;
; XREF[2]:
;   FUN_100081e0 at 10008395
;   FUN_10010970 at 10010b7a
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 1000a930
        ;   Label: FUN_1000a930
    MOV EAX,ECX                         ; 1000a934
    MOV EDX,EAX                         ; 1000a936
        ;   Label: LAB_1000a936
    ADD EAX,0x2                         ; 1000a938
    CMP word ptr [EDX],0x0              ; 1000a93b
    JNZ 0x1000a936                      ; 1000a93f
        ;   XREF to: 1000a936 (CONDITIONAL_JUMP)  ; LAB_1000a936
    SUB EAX,ECX                         ; 1000a941
    SAR EAX,0x1                         ; 1000a943
    DEC EAX                             ; 1000a946
    RET                                 ; 1000a947

