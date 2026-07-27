; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_stairs.cpp_FUN_00534820 at 00534832
;
; Referenced Globals:
;   double DOUBLE_005951a2 = 0.5
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534ad0
        ;   Label: core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0
    PUSH ESI                            ; 00534ad1
    PUSH EBP                            ; 00534ad2
    SUB ESP,0x4c                        ; 00534ad3
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00534ad6
    FLD double ptr [0x005951a2]         ; 00534ada | DOUBLE_005951a2
    FLD float ptr [EBX + 0x158]         ; 00534ae0
    FMUL ST1                            ; 00534ae6
    FLD float ptr [EBX + 0x158]         ; 00534ae8
    FCHS                                ; 00534aee
    FMULP ST2                           ; 00534af0
    MOV EDX,dword ptr [EBX + 0x164]     ; 00534af2
    XOR ESI,ESI                         ; 00534af8
    FSTP float ptr [ESP + 0x40]         ; 00534afa
    FSTP float ptr [ESP + 0x44]         ; 00534afe
    TEST EDX,EDX                        ; 00534b02
    JLE 0x00534bfb                      ; 00534b04
        ;   XREF to: 00534bfb (CONDITIONAL_JUMP)  ; LAB_00534bfb
    PUSH EDI                            ; 00534b0a
    LEA EDI,[EBX + 0x168]               ; 00534b0b
    LEA EBP,[EBX + 0x1a0]               ; 00534b11
    INC ESI                             ; 00534b17
        ;   Label: LAB_00534b17
    MOV dword ptr [ESP + 0x4c],ESI      ; 00534b18
    FILD dword ptr [ESP + 0x4c]         ; 00534b1c
    FLD float ptr [EBX + 0x150]         ; 00534b20
    FMUL ST1                            ; 00534b26
    FLD float ptr [EBX + 0x154]         ; 00534b28
    FMULP ST2                           ; 00534b2e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00534b30
    FSTP float ptr [ESP + 0x38]         ; 00534b34
    FSTP float ptr [ESP + 0x40]         ; 00534b38
    FLD float ptr [ESP + 0x38]          ; 00534b3c
    FLD float ptr [ESP + 0x40]          ; 00534b40
    FSUB float ptr [EBX + 0x160]        ; 00534b44
    FXCH                                ; 00534b4a
    FSUB float ptr [EBX + 0x15c]        ; 00534b4c
    MOV dword ptr [ESP + 0x4],EAX       ; 00534b52
    MOV EAX,dword ptr [ESP + 0x38]      ; 00534b56
    MOV dword ptr [ESP + 0x8],EAX       ; 00534b5a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00534b5e
    MOV dword ptr [ESP + 0xc],EAX       ; 00534b62
    MOV EAX,dword ptr [ESP + 0x44]      ; 00534b66
    MOV dword ptr [ESP + 0x10],EAX      ; 00534b6a
    MOV EAX,dword ptr [ESP + 0x38]      ; 00534b6e
    MOV dword ptr [ESP + 0x14],EAX      ; 00534b72
    MOV EAX,dword ptr [ESP + 0x40]      ; 00534b76
    MOV dword ptr [ESP + 0x18],EAX      ; 00534b7a
    MOV EAX,dword ptr [ESP + 0x44]      ; 00534b7e
    FSTP float ptr [ESP + 0x3c]         ; 00534b82
    MOV dword ptr [ESP + 0x28],EAX      ; 00534b86
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00534b8a
    FSTP float ptr [ESP + 0x34]         ; 00534b8e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00534b92
    MOV EAX,dword ptr [ESP + 0x34]      ; 00534b96
    MOV dword ptr [ESP + 0x30],EAX      ; 00534b9a
    MOV EAX,dword ptr [ESP + 0x48]      ; 00534b9e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00534ba2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00534ba6
    MOV dword ptr [ESP + 0x20],EAX      ; 00534baa
    MOV EAX,dword ptr [ESP + 0x34]      ; 00534bae
    MOV dword ptr [ESP + 0x24],EAX      ; 00534bb2
    LEA EAX,[ESP + 0x28]                ; 00534bb6
    PUSH EAX                            ; 00534bba
    LEA EAX,[ESP + 0x14]                ; 00534bbb
    PUSH EAX                            ; 00534bbf
    LEA EAX,[ESP + 0xc]                 ; 00534bc0
    PUSH EAX                            ; 00534bc4
    PUSH EDI                            ; 00534bc5
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 00534bc6
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0()
    ADD ESP,0x10                        ; 00534bcb
    LEA EAX,[ESP + 0x1c]                ; 00534bce
    PUSH EAX                            ; 00534bd2
    LEA EAX,[ESP + 0x2c]                ; 00534bd3
    PUSH EAX                            ; 00534bd7
    LEA EAX,[ESP + 0xc]                 ; 00534bd8
    PUSH EAX                            ; 00534bdc
    PUSH EBP                            ; 00534bdd
    ADD EDI,0x70                        ; 00534bde
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 ; 00534be1
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0()
    ADD ESP,0x10                        ; 00534be6
    MOV ECX,dword ptr [EBX + 0x164]     ; 00534be9
    ADD EBP,0x70                        ; 00534bef
    CMP ESI,ECX                         ; 00534bf2
    JL 0x00534b17                       ; 00534bf4
        ;   XREF to: 00534b17 (CONDITIONAL_JUMP)  ; LAB_00534b17
    POP EDI                             ; 00534bfa
    ADD ESP,0x4c                        ; 00534bfb
        ;   Label: LAB_00534bfb
    POP EBP                             ; 00534bfe
    POP ESI                             ; 00534bff
    POP EBX                             ; 00534c00
    RET                                 ; 00534c01

