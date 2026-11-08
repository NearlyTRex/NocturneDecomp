; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_00504fe0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005042e0 at 00504385
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_004688a0
;   FUN_00483850
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00504fe0
        ;   Label: FUN_00504fe0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00504fe4
    SUB EAX,EDX                         ; 00504feb
    SHL EAX,0x3                         ; 00504fed
    ADD EDX,EAX                         ; 00504ff0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00504ff2
    SHL EDX,0x2                         ; 00504ff6
    ADD EAX,0x5f0                       ; 00504ff9
    ADD EAX,EDX                         ; 00504ffe
    CMP dword ptr [EAX],0x0             ; 00505000
    JNZ 0x00505006                      ; 00505003
        ;   XREF to: 00505006 (CONDITIONAL_JUMP)  ; LAB_00505006
    RET                                 ; 00505005
    PUSH EBX                            ; 00505006
        ;   Label: LAB_00505006
    LEA EDX,[EAX + 0xc]                 ; 00505007
    PUSH EDX                            ; 0050500a
    ADD EAX,0x18                        ; 0050500b
    PUSH EAX                            ; 0050500e
    MOV ECX,dword ptr [0x00612560]      ; 0050500f | DAT_00612560
    PUSH ECX                            ; 00505015
    CALL FUN_00483850                   ; 00505016
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0050501b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050501e
    PUSH -0x1                           ; 00505022
    ADD EAX,0x158                       ; 00505024
    PUSH 0x0                            ; 00505029
    PUSH EAX                            ; 0050502b
    CALL FUN_004688a0                   ; 0050502c
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 00505031
    MOV EBX,dword ptr [0x00612560]      ; 00505034 | DAT_00612560
    PUSH EBX                            ; 0050503a
    CALL thunk_FUN_005084b0             ; 0050503b
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 00505040
    POP EBX                             ; 00505043
    LEA EAX,[EAX]                       ; 00505044
    LEA EDX,[EDX]                       ; 0050504a
    RET                                 ; 00505050

