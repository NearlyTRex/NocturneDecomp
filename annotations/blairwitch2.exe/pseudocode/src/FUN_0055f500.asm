; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055f500(void)
;
;
; XREF[8]:
;   FUN_00440760 at 0044076e
;   FUN_0047baf0 at 0047bb40
;   FUN_0047bbd0 at 0047bc10
;   FUN_004b5190 at 004b54b1
;   FUN_004bcbf0 at 004bcde2
;   FUN_0055f770 at 0055f812
;   FUN_0055ff40 at 0055ffb4
;   thunk_FUN_0055f500 at 004f23d0
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbd8
;   undefined4 DAT_0264bcf4
;   undefined4 DAT_0264bcfc
;   undefined4 DAT_0264bd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01c37788]      ; 0055f500 | DAT_01c37788
        ;   Label: FUN_0055f500
    TEST EDX,EDX                        ; 0055f506
    JNZ 0x0055f513                      ; 0055f508
        ;   XREF to: 0055f513 (CONDITIONAL_JUMP)  ; LAB_0055f513
    MOV dword ptr [0x0264bd00],EDX      ; 0055f50a | DAT_0264bd00
    XOR EAX,EAX                         ; 0055f510
        ;   Label: LAB_0055f510
    RET                                 ; 0055f512
        ;   Label: LAB_0055f512
    CALL dword ptr [0x0264bbd8]         ; 0055f513 | DAT_0264bbd8
        ;   Label: LAB_0055f513
    TEST EAX,EAX                        ; 0055f519
    JZ 0x0055f512                       ; 0055f51b
        ;   XREF to: 0055f512 (CONDITIONAL_JUMP)  ; LAB_0055f512
    PUSH EBX                            ; 0055f51d
    MOV ECX,0x1                         ; 0055f51e
    MOV EAX,[0x006141c0]                ; 0055f523 | DAT_006141c0
    XOR EBX,EBX                         ; 0055f528
    MOV [0x0264bcfc],EAX                ; 0055f52a | DAT_0264bcfc
    MOV dword ptr [0x0264bd00],ECX      ; 0055f52f | DAT_0264bd00
    MOV EAX,[0x0264bcf4]                ; 0055f535 | DAT_0264bcf4
    MOV dword ptr [0x01c37788],EBX      ; 0055f53a | DAT_01c37788
    MOV [0x006141c0],EAX                ; 0055f540 | DAT_006141c0
    MOV EAX,ECX                         ; 0055f545
    POP EBX                             ; 0055f547
    RET                                 ; 0055f548

