; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004109e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;
; Called Functions:
;   FUN_00559440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004109e0
        ;   Label: FUN_004109e0
    CMP dword ptr [EAX + 0x164],0x0     ; 004109e4
    JNZ 0x004109ee                      ; 004109eb
        ;   XREF to: 004109ee (CONDITIONAL_JUMP)  ; LAB_004109ee
    RET                                 ; 004109ed
    PUSH EAX                            ; 004109ee
        ;   Label: LAB_004109ee
    MOV ECX,dword ptr [0x00622c18]      ; 004109ef | DAT_00622c18
    PUSH ECX                            ; 004109f5
    CALL FUN_00559440                   ; 004109f6
        ;   XREF to: 00559440 (UNCONDITIONAL_CALL)  ; undefined FUN_00559440()
    ADD ESP,0x8                         ; 004109fb
    RET                                 ; 004109fe

