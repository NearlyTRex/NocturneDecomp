; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bdf0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[10]:
;   FUN_00453250 at 00453bcb
;   FUN_00458320 at 0045838e
;   FUN_004a61b0 at 004a63a7
;   FUN_004e46c0 at 004e4a70
;   FUN_0052a0d0 at 0052a3e4
;   FUN_00534a90 at 00534b00
;   FUN_005656f0 at 00565e3c
;   FUN_0056a160 at 0056a1ce
;   FUN_0056acd0 at 0056b05b
;   FUN_0056db50 at 0056e444
;
; Referenced Globals:
;   TerminatedCString s_Warning_005d1fc1
;   undefined4 DAT_01c263a0
;
; Called Functions:
;   FUN_0047b800
;   FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bdf0
        ;   Label: FUN_0047bdf0
    SUB ESP,0x4                         ; 0047bdf1
    LEA EAX,[ESP + 0x14]                ; 0047bdf4
    MOV dword ptr [ESP],EAX             ; 0047bdf8
    MOV EAX,ESP                         ; 0047bdfb
    PUSH EAX                            ; 0047bdfd
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047bdfe
    PUSH EDX                            ; 0047be02
    PUSH 0x1c229f0                      ; 0047be03
    CALL FUN_005b7768                   ; 0047be08
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 0047be0d
    MOV EBX,dword ptr [0x01c263a0]      ; 0047be10 | DAT_01c263a0
    PUSH EBX                            ; 0047be16
    PUSH 0x1c229f0                      ; 0047be17
    XOR ECX,ECX                         ; 0047be1c
    PUSH 0x5d1fc1                       ; 0047be1e | = "Warning"
    MOV dword ptr [ESP + 0xc],ECX       ; 0047be23
    CALL FUN_0047b800                   ; 0047be27
        ;   XREF to: 0047b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0047b800()
    ADD ESP,0xc                         ; 0047be2c
    ADD ESP,0x4                         ; 0047be2f
    POP EBX                             ; 0047be32
    RET                                 ; 0047be33

