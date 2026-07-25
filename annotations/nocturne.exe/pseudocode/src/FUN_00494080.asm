; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00494080(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c0063c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00494080
        ;   Label: FUN_00494080
    MOV EDX,dword ptr [ESP + 0x8]       ; 00494084
    CMP dword ptr [0x005b7624],0x20     ; 00494088 | DAT_005b7624
    JNZ 0x004940b6                      ; 0049408f
        ;   XREF to: 004940b6 (CONDITIONAL_JUMP)  ; LAB_004940b6
    MOV CL,byte ptr [0x01c00624]        ; 00494091 | DAT_01c00624
    SHL EAX,CL                          ; 00494097
    MOV CL,byte ptr [0x01c00630]        ; 00494099 | DAT_01c00630
    SHL EDX,CL                          ; 0049409f
    MOV CL,byte ptr [0x01c0063c]        ; 004940a1 | DAT_01c0063c
    OR EAX,EDX                          ; 004940a7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004940a9
    SHL EDX,CL                          ; 004940ad
    MOV ECX,EDX                         ; 004940af
    OR ECX,EAX                          ; 004940b1
    MOV EAX,ECX                         ; 004940b3
    RET                                 ; 004940b5
    PUSH EBX                            ; 004940b6
        ;   Label: LAB_004940b6
    MOV ECX,EAX                         ; 004940b7
    MOV EAX,EDX                         ; 004940b9
    SHL ECX,0x10                        ; 004940bb
    SHL EAX,0x8                         ; 004940be
    MOV EBX,dword ptr [ESP + 0x10]      ; 004940c1
    OR ECX,EAX                          ; 004940c5
    OR ECX,EBX                          ; 004940c7
    POP EBX                             ; 004940c9
    MOV EAX,ECX                         ; 004940ca
    RET                                 ; 004940cc

