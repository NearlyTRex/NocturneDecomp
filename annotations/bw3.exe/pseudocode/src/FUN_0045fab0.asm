; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045fab0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[6]:
;   FUN_00420420 at 00420669
;   FUN_00486c30 at 00486d08
;   FUN_005365c0 at 005366e3
;   FUN_00536990 at 00536aba
;   FUN_00542aa0 at 00542b06
;   FUN_0057b5c0 at 0057b771
;
; Referenced Globals:
;   undefined4 DAT_005bb5b4
;   undefined4 DAT_005bb5bc
;   undefined4 DAT_005f18dc
;   undefined4 DAT_005f18fc
;
; Called Functions:
;   FUN_0045db40
;   FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0045fab0
        ;   Label: FUN_0045fab0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045fab3
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045fab7
    MOV dword ptr [EAX + 0x2fa8],EDX    ; 0045fabb
    CMP dword ptr [EAX + 0x1cc0],0x100  ; 0045fac1
    JLE 0x0045fb03                      ; 0045facb
        ;   XREF to: 0045fb03 (CONDITIONAL_JUMP)  ; LAB_0045fb03
    PUSH EBX                            ; 0045facd
    FLD float ptr [EAX + 0x2fa8]        ; 0045face
    PUSH 0x0                            ; 0045fad4
    FMUL double ptr [0x005bb5bc]        ; 0045fad6 | DAT_005bb5bc
    PUSH 0x0                            ; 0045fadc
    CALL FUN_005a3120                   ; 0045fade
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 0045fae3
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045fae7
    PUSH 0x0                            ; 0045faeb
    MOV EBX,dword ptr [EDX*0x4 + 0x5f18fc] ; 0045faed | DAT_005f18fc
    PUSH EBX                            ; 0045faf4
    PUSH EAX                            ; 0045faf5
    CALL FUN_0045db40                   ; 0045faf6
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045db40()
    ADD ESP,0x14                        ; 0045fafb
    POP EBX                             ; 0045fafe
    ADD ESP,0x4                         ; 0045faff
    RET                                 ; 0045fb02
    FLD float ptr [EAX + 0x2fa8]        ; 0045fb03
        ;   Label: LAB_0045fb03
    PUSH 0x0                            ; 0045fb09
    FMUL double ptr [0x005bb5b4]        ; 0045fb0b | DAT_005bb5b4
    PUSH 0x0                            ; 0045fb11
    CALL FUN_005a3120                   ; 0045fb13
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 0045fb18
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045fb1c
    PUSH 0x0                            ; 0045fb20
    MOV ECX,dword ptr [EDX*0x4 + 0x5f18dc] ; 0045fb22 | DAT_005f18dc
    PUSH ECX                            ; 0045fb29
    PUSH EAX                            ; 0045fb2a
    CALL FUN_0045db40                   ; 0045fb2b
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045db40()
    ADD ESP,0x14                        ; 0045fb30
    ADD ESP,0x4                         ; 0045fb33
    RET                                 ; 0045fb36

