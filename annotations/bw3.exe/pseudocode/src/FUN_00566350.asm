; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566350(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00449750 at 00449825
;   FUN_00449a00 at 00449b1f
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6064
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00566350 | DAT_01c6cee8
        ;   Label: FUN_00566350
    JNZ 0x0056635c                      ; 00566357
        ;   XREF to: 0056635c (CONDITIONAL_JUMP)  ; LAB_0056635c
    XOR EAX,EAX                         ; 00566359
    RET                                 ; 0056635b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056635c
        ;   Label: LAB_0056635c
    PUSH ECX                            ; 00566360
    CALL dword ptr [0x02cf6064]         ; 00566361 | DAT_02cf6064
    ADD ESP,0x4                         ; 00566367
    RET                                 ; 0056636a

