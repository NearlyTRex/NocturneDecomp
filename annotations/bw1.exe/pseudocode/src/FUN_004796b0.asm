; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004796b0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x208]:1  local_208
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   FUN_004bcba0 at 004bd7d8
;   FUN_005967a0 at 005968dd
;
; Called Functions:
;   FUN_00479580
;   FUN_004795b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004796b0
        ;   Label: FUN_004796b0
    SUB ESP,0x204                       ; 004796b1
    PUSH 0x0                            ; 004796b7
    LEA EAX,[ESP + 0x4]                 ; 004796b9
    PUSH EAX                            ; 004796bd
    LEA EAX,[ESP + 0x108]               ; 004796be
    PUSH EAX                            ; 004796c5
    LEA EAX,[ESP + 0x20c]               ; 004796c6
    PUSH EAX                            ; 004796cd
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004796ce
    PUSH EDX                            ; 004796d5
    CALL FUN_00479580                   ; 004796d6
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 004796db
    MOV ECX,dword ptr [ESP + 0x210]     ; 004796de
    PUSH ECX                            ; 004796e5
    LEA EAX,[ESP + 0x4]                 ; 004796e6
    PUSH EAX                            ; 004796ea
    LEA EAX,[ESP + 0x108]               ; 004796eb
    PUSH EAX                            ; 004796f2
    LEA EAX,[ESP + 0x20c]               ; 004796f3
    PUSH EAX                            ; 004796fa
    MOV EBX,dword ptr [ESP + 0x21c]     ; 004796fb
    PUSH EBX                            ; 00479702
    CALL FUN_004795b0                   ; 00479703
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 00479708
    ADD ESP,0x204                       ; 0047970b
    POP EBX                             ; 00479711
    RET                                 ; 00479712

