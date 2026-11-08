; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d62e0(void)
;
;
; XREF[3]:
;   FUN_004a70d0 at 004a82c5
;   FUN_004cf5e0 at 004d0323
;   FUN_00544460 at 00547238
;
; Referenced Globals:
;   undefined4 DAT_01cd0c7c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cd0c7c]      ; 004d62e0 | DAT_01cd0c7c
        ;   Label: FUN_004d62e0
    TEST EDX,EDX                        ; 004d62e6
    JZ 0x004d62ef                       ; 004d62e8
        ;   XREF to: 004d62ef (CONDITIONAL_JUMP)  ; LAB_004d62ef
    CMP EDX,0x5                         ; 004d62ea
    JNZ 0x004d62f5                      ; 004d62ed
        ;   XREF to: 004d62f5 (CONDITIONAL_JUMP)  ; LAB_004d62f5
    MOV EAX,0x1                         ; 004d62ef
        ;   Label: LAB_004d62ef
    RET                                 ; 004d62f4
    XOR EAX,EAX                         ; 004d62f5
        ;   Label: LAB_004d62f5
    RET                                 ; 004d62f7

