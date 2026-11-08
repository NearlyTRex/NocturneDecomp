; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057d110(int param_1)
;
;
; XREF[2]:
;   FUN_0054c7f0 at 0054ca8a
;   FUN_005519e0 at 00551ae8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d110
        ;   Label: FUN_0057d110
    CMP dword ptr [EAX + 0x4],0x0       ; 0057d114
    JNZ 0x0057d120                      ; 0057d118
        ;   XREF to: 0057d120 (CONDITIONAL_JUMP)  ; LAB_0057d120
    MOV EAX,0xffffffff                  ; 0057d11a
    RET                                 ; 0057d11f
    MOV EAX,dword ptr [EAX + 0x10]      ; 0057d120
        ;   Label: LAB_0057d120
    RET                                 ; 0057d123

