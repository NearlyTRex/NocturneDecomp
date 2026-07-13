; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00452080(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[6]:
;   FUN_004777a0 at 00477860
;   FUN_004c6ff0 at 004c7091
;   FUN_0050a260 at 0050a36d
;   FUN_00515350 at 005153bf
;   FUN_00515db0 at 00515e70
;   FUN_005543c0 at 005544d7
;
; Referenced Globals:
;   undefined4 DAT_0057c946
;   undefined4 DAT_0057c94e
;   undefined4 DAT_005ad51c
;   undefined4 DAT_005ad53c
;
; Called Functions:
;   FUN_004501c0
;   FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00452080
        ;   Label: FUN_00452080
    MOV EAX,dword ptr [ESP + 0x8]       ; 00452083
    MOV EDX,dword ptr [ESP + 0xc]       ; 00452087
    MOV dword ptr [EAX + 0x2fa8],EDX    ; 0045208b
    CMP dword ptr [EAX + 0x1cc0],0x100  ; 00452091
    JLE 0x004520d3                      ; 0045209b
        ;   XREF to: 004520d3 (CONDITIONAL_JUMP)  ; LAB_004520d3
    PUSH EBX                            ; 0045209d
    FLD float ptr [EAX + 0x2fa8]        ; 0045209e
    PUSH 0x0                            ; 004520a4
    FMUL double ptr [0x0057c94e]        ; 004520a6 | DAT_0057c94e
    PUSH 0x0                            ; 004520ac
    CALL FUN_00563a30                   ; 004520ae
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 004520b3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004520b7
    PUSH 0x0                            ; 004520bb
    MOV EBX,dword ptr [EDX*0x4 + 0x5ad53c] ; 004520bd | DAT_005ad53c
    PUSH EBX                            ; 004520c4
    PUSH EAX                            ; 004520c5
    CALL FUN_004501c0                   ; 004520c6
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004501c0()
    ADD ESP,0x14                        ; 004520cb
    POP EBX                             ; 004520ce
    ADD ESP,0x4                         ; 004520cf
    RET                                 ; 004520d2
    FLD float ptr [EAX + 0x2fa8]        ; 004520d3
        ;   Label: LAB_004520d3
    PUSH 0x0                            ; 004520d9
    FMUL double ptr [0x0057c946]        ; 004520db | DAT_0057c946
    PUSH 0x0                            ; 004520e1
    CALL FUN_00563a30                   ; 004520e3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 004520e8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004520ec
    PUSH 0x0                            ; 004520f0
    MOV ECX,dword ptr [EDX*0x4 + 0x5ad51c] ; 004520f2 | DAT_005ad51c
    PUSH ECX                            ; 004520f9
    PUSH EAX                            ; 004520fa
    CALL FUN_004501c0                   ; 004520fb
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004501c0()
    ADD ESP,0x14                        ; 00452100
    ADD ESP,0x4                         ; 00452103
    RET                                 ; 00452106

