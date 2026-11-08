; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00465cf0(int param_1,byte *param_2)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined2       Stack[-0x28]:2  local_28
; undefined2       Stack[-0x26]:2  local_26
; undefined2       Stack[-0x22]:2  local_22
; undefined2       Stack[-0x20]:2  local_20
; undefined2       Stack[-0x1e]:2  local_1e
; undefined2       Stack[-0x1c]:2  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[2]:
;   FUN_00465ba0 at 00465bef
;   FUN_00465c20 at 00465c76
;
; Referenced Globals:
;   void* PTR_FileTimeToLocalFileTime_005b354c = 001b3d32
;   void* PTR_FileTimeToSystemTime_005b3550 = 001b3d4c
;   TerminatedCString s_engine_dosio_c_005bc005
;   TerminatedCString s_CFileFinder_convertStruc_005bc017
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FileTimeToLocalFileTime
;   FileTimeToSystemTime
;   FUN_004e4330
;   FUN_005a28f0
;   FUN_005a4ee0
;   FUN_005a4f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465cf0
        ;   Label: FUN_00465cf0
    PUSH ESI                            ; 00465cf1
    PUSH EDI                            ; 00465cf2
    PUSH EBP                            ; 00465cf3
    SUB ESP,0x3c                        ; 00465cf4
    MOV EBX,dword ptr [ESP + 0x50]      ; 00465cf7
    MOV EDI,dword ptr [ESP + 0x54]      ; 00465cfb
    PUSH 0x100                          ; 00465cff
    PUSH 0x0                            ; 00465d04
    PUSH EBX                            ; 00465d06
    CALL FUN_005a28f0                   ; 00465d07
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00465d0c
    PUSH 0xff                           ; 00465d0f
    MOV ESI,EDI                         ; 00465d14
    LEA EAX,[EDI + 0x2c]                ; 00465d16
    PUSH EAX                            ; 00465d19
    PUSH EBX                            ; 00465d1a
    CALL FUN_005a4ee0                   ; 00465d1b
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4ee0()
    MOV dword ptr [EBX + 0x100],0x0     ; 00465d20
    MOV AH,byte ptr [EDI]               ; 00465d2a
    ADD ESP,0xc                         ; 00465d2c
    TEST AH,0x20                        ; 00465d2f
    JNZ 0x00465db4                      ; 00465d32
        ;   XREF to: 00465db4 (CONDITIONAL_JUMP)  ; LAB_00465db4
    TEST byte ptr [ESI],0x2             ; 00465d38
        ;   Label: LAB_00465d38
    JZ 0x00465d44                       ; 00465d3b
        ;   XREF to: 00465d44 (CONDITIONAL_JUMP)  ; LAB_00465d44
    OR byte ptr [EBX + 0x100],0x2       ; 00465d3d
    TEST byte ptr [ESI],0x10            ; 00465d44
        ;   Label: LAB_00465d44
    JZ 0x00465d50                       ; 00465d47
        ;   XREF to: 00465d50 (CONDITIONAL_JUMP)  ; LAB_00465d50
    OR byte ptr [EBX + 0x100],0x4       ; 00465d49
    TEST byte ptr [ESI],0x1             ; 00465d50
        ;   Label: LAB_00465d50
    JZ 0x00465d5c                       ; 00465d53
        ;   XREF to: 00465d5c (CONDITIONAL_JUMP)  ; LAB_00465d5c
    OR byte ptr [EBX + 0x100],0x8       ; 00465d55
    CMP dword ptr [ESI + 0x1c],0x0      ; 00465d5c
        ;   Label: LAB_00465d5c
    JZ 0x00465dc0                       ; 00465d60
        ;   XREF to: 00465dc0 (CONDITIONAL_JUMP)  ; LAB_00465dc0
    MOV EDI,0x5bc005                    ; 00465d62 | = "..\\engine\\dosio.c"
        ;   Label: LAB_00465d62
    MOV EBP,0x2ff                       ; 00465d67
    PUSH 0x5bc017                       ; 00465d6c | = "CFileFinder::convertStruct - file too..."
    MOV dword ptr [0x01d71de0],EDI      ; 00465d71 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00465d77 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00465d7d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00465d82
    MOV EAX,dword ptr [ESI + 0x20]      ; 00465d85
        ;   Label: LAB_00465d85
    MOV dword ptr [EBX + 0x104],EAX     ; 00465d88
    LEA EAX,[ESP + 0x34]                ; 00465d8e
    PUSH EAX                            ; 00465d92
    ADD ESI,0x14                        ; 00465d93
    PUSH ESI                            ; 00465d96
    MOV dword ptr [EBX + 0x108],0x0     ; 00465d97
    CALL dword ptr CS:[0x5b354c]        ; 00465da1 | PTR_FileTimeToLocalFileTime_005b354c
    TEST EAX,EAX                        ; 00465da8
    JNZ 0x00465dcb                      ; 00465daa
        ;   XREF to: 00465dcb (CONDITIONAL_JUMP)  ; LAB_00465dcb
    ADD ESP,0x3c                        ; 00465dac
        ;   Label: LAB_00465dac
    POP EBP                             ; 00465daf
    POP EDI                             ; 00465db0
    POP ESI                             ; 00465db1
    POP EBX                             ; 00465db2
    RET                                 ; 00465db3
    OR byte ptr [EBX + 0x100],0x1       ; 00465db4
        ;   Label: LAB_00465db4
    JMP 0x00465d38                      ; 00465dbb
        ;   XREF to: 00465d38 (UNCONDITIONAL_JUMP)  ; LAB_00465d38
    CMP dword ptr [ESI + 0x20],0x7fffffff ; 00465dc0
        ;   Label: LAB_00465dc0
    JA 0x00465d62                       ; 00465dc7
        ;   XREF to: 00465d62 (CONDITIONAL_JUMP)  ; LAB_00465d62
    JMP 0x00465d85                      ; 00465dc9
        ;   XREF to: 00465d85 (UNCONDITIONAL_JUMP)  ; LAB_00465d85
    LEA EAX,[ESP + 0x24]                ; 00465dcb
        ;   Label: LAB_00465dcb
    PUSH EAX                            ; 00465dcf
    LEA EAX,[ESP + 0x38]                ; 00465dd0
    PUSH EAX                            ; 00465dd4
    CALL dword ptr CS:[0x5b3550]        ; 00465dd5 | PTR_FileTimeToSystemTime_005b3550
    TEST EAX,EAX                        ; 00465ddc
    JZ 0x00465dac                       ; 00465dde
        ;   XREF to: 00465dac (CONDITIONAL_JUMP)  ; LAB_00465dac
    XOR EAX,EAX                         ; 00465de0
    MOV AX,word ptr [ESP + 0x30]        ; 00465de2
    MOV dword ptr [ESP],EAX             ; 00465de7
    XOR EAX,EAX                         ; 00465dea
    MOV AX,word ptr [ESP + 0x2e]        ; 00465dec
    MOV dword ptr [ESP + 0x4],EAX       ; 00465df1
    XOR EAX,EAX                         ; 00465df5
    MOV AX,word ptr [ESP + 0x2c]        ; 00465df7
    MOV dword ptr [ESP + 0x8],EAX       ; 00465dfc
    XOR EAX,EAX                         ; 00465e00
    MOV AX,word ptr [ESP + 0x2a]        ; 00465e02
    MOV dword ptr [ESP + 0xc],EAX       ; 00465e07
    XOR EAX,EAX                         ; 00465e0b
    MOV AX,word ptr [ESP + 0x26]        ; 00465e0d
    DEC EAX                             ; 00465e12
    MOV dword ptr [ESP + 0x10],EAX      ; 00465e13
    XOR EAX,EAX                         ; 00465e17
    MOV AX,word ptr [ESP + 0x24]        ; 00465e19
    SUB EAX,0x76c                       ; 00465e1e
    MOV dword ptr [ESP + 0x14],EAX      ; 00465e23
    MOV dword ptr [ESP + 0x20],0xffffffff ; 00465e27
    MOV EAX,ESP                         ; 00465e2f
    PUSH EAX                            ; 00465e31
    CALL FUN_005a4f20                   ; 00465e32
        ;   XREF to: 005a4f20 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4f20()
    ADD ESP,0x4                         ; 00465e37
    MOV dword ptr [EBX + 0x108],EAX     ; 00465e3a
    ADD ESP,0x3c                        ; 00465e40
    POP EBP                             ; 00465e43
    POP EDI                             ; 00465e44
    POP ESI                             ; 00465e45
    POP EBX                             ; 00465e46
    RET                                 ; 00465e47

