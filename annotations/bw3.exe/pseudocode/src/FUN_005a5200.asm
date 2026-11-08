; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a5200(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_005a521c at 005a52b3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a5200
        ;   Label: FUN_005a5200
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a5204
    CMP EAX,0x5c                        ; 005a5208
    JZ 0x005a5212                       ; 005a520b
        ;   XREF to: 005a5212 (CONDITIONAL_JUMP)  ; LAB_005a5212
    CMP EAX,0x2f                        ; 005a520d
    JNZ 0x005a521b                      ; 005a5210
        ;   XREF to: 005a521b (CONDITIONAL_JUMP)  ; LAB_005a521b
    CMP dword ptr [EDX],0x0             ; 005a5212
        ;   Label: LAB_005a5212
    JNZ 0x005a5219                      ; 005a5215
        ;   XREF to: 005a5219 (CONDITIONAL_JUMP)  ; LAB_005a5219
    MOV dword ptr [EDX],EAX             ; 005a5217
    MOV EAX,dword ptr [EDX]             ; 005a5219
        ;   Label: LAB_005a5219
    RET                                 ; 005a521b
        ;   Label: LAB_005a521b

