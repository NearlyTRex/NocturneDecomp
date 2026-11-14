; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_muzzle_cpp_FUN_0059df90(int *param_1,int param_2,int param_3)
;
; Local Variables:
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
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   core_muzzle.cpp_FUN_0059dd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059df90
        ;   Label: core_muzzle.cpp_FUN_0059df90
    SUB ESP,0x3c                        ; 0059df91
    MOV EBX,dword ptr [ESP + 0x44]      ; 0059df94
    CMP dword ptr [EBX],0x0             ; 0059df98
    JZ 0x0059dfa6                       ; 0059df9b
        ;   XREF to: 0059dfa6 (CONDITIONAL_JUMP)  ; LAB_0059dfa6
    CMP dword ptr [EBX + 0x3c4],0x10    ; 0059df9d
    JL 0x0059dfb0                       ; 0059dfa4
        ;   XREF to: 0059dfb0 (CONDITIONAL_JUMP)  ; LAB_0059dfb0
    MOV EAX,0xffffffff                  ; 0059dfa6
        ;   Label: LAB_0059dfa6
    ADD ESP,0x3c                        ; 0059dfab
    POP EBX                             ; 0059dfae
    RET                                 ; 0059dfaf
    PUSH EDI                            ; 0059dfb0
        ;   Label: LAB_0059dfb0
    PUSH ESI                            ; 0059dfb1
    XOR ESI,ESI                         ; 0059dfb2
    MOV EAX,dword ptr [ESP + 0x50]      ; 0059dfb4
    MOV dword ptr [ESP + 0x28],ESI      ; 0059dfb8
    MOV dword ptr [ESP + 0x8],EAX       ; 0059dfbc
    MOV EAX,dword ptr [ESP + 0x54]      ; 0059dfc0
    MOV dword ptr [ESP + 0x2c],ESI      ; 0059dfc4
    MOV dword ptr [ESP + 0xc],EAX       ; 0059dfc8
    LEA EAX,[ESP + 0x8]                 ; 0059dfcc
    MOV dword ptr [ESP + 0x30],ESI      ; 0059dfd0
    PUSH EAX                            ; 0059dfd4
    MOV dword ptr [ESP + 0x38],ESI      ; 0059dfd5
    MOV dword ptr [ESP + 0x44],ESI      ; 0059dfd9
    PUSH EBX                            ; 0059dfdd
    MOV dword ptr [ESP + 0x40],ESI      ; 0059dfde
    MOV dword ptr [ESP + 0x44],ESI      ; 0059dfe2
    CALL core_muzzle.cpp_FUN_0059dd00   ; 0059dfe6
        ;   XREF to: 0059dd00 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dd00()
    MOV EAX,dword ptr [EBX + 0x3c4]     ; 0059dfeb
    SHL EAX,0x2                         ; 0059dff1
    MOV EDX,EAX                         ; 0059dff4
    SHL EAX,0x4                         ; 0059dff6
    LEA ECX,[EBX + 0x4]                 ; 0059dff9
    SUB EAX,EDX                         ; 0059dffc
    ADD ESP,0x8                         ; 0059dffe
    ADD ECX,EAX                         ; 0059e001
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059e003
    MOV EDX,ECX                         ; 0059e007
    MOV dword ptr [ECX],EAX             ; 0059e009
    ADD ECX,0x8                         ; 0059e00b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059e00e
    MOV dword ptr [ECX + -0x4],EAX      ; 0059e012
    LEA EAX,[ESP + 0x10]                ; 0059e015
    CMP ECX,EAX                         ; 0059e019
    JZ 0x0059e031                       ; 0059e01b
        ;   XREF to: 0059e031 (CONDITIONAL_JUMP)  ; LAB_0059e031
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059e01d
    MOV dword ptr [ECX],EAX             ; 0059e021
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059e023
    MOV dword ptr [ECX + 0x4],EAX       ; 0059e027
    MOV EAX,dword ptr [ESP + 0x18]      ; 0059e02a
    MOV dword ptr [ECX + 0x8],EAX       ; 0059e02e
    LEA EAX,[ESP + 0x1c]                ; 0059e031
        ;   Label: LAB_0059e031
    LEA ECX,[EDX + 0x14]                ; 0059e035
    CMP ECX,EAX                         ; 0059e038
    JZ 0x0059e050                       ; 0059e03a
        ;   XREF to: 0059e050 (CONDITIONAL_JUMP)  ; LAB_0059e050
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059e03c
    MOV dword ptr [ECX],EAX             ; 0059e040
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059e042
    MOV dword ptr [ECX + 0x4],EAX       ; 0059e046
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059e049
    MOV dword ptr [ECX + 0x8],EAX       ; 0059e04d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059e050
        ;   Label: LAB_0059e050
    MOV dword ptr [EDX + 0x20],EAX      ; 0059e054
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0059e057
    MOV dword ptr [EDX + 0x24],EAX      ; 0059e05b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0059e05e
    MOV dword ptr [EDX + 0x28],EAX      ; 0059e062
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059e065
    MOV dword ptr [EDX + 0x2c],EAX      ; 0059e069
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059e06c
    MOV dword ptr [EDX + 0x30],EAX      ; 0059e070
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0059e073
    MOV dword ptr [EDX + 0x34],EAX      ; 0059e077
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059e07a
    MOV dword ptr [EDX + 0x38],EAX      ; 0059e07e
    MOV EDI,dword ptr [EBX + 0x3c4]     ; 0059e081
    INC EDI                             ; 0059e087
    MOV EAX,0x2                         ; 0059e088
    MOV dword ptr [EBX + 0x3c4],EDI     ; 0059e08d
    POP ESI                             ; 0059e093
    POP EDI                             ; 0059e094
    ADD ESP,0x3c                        ; 0059e095
    POP EBX                             ; 0059e098
    RET                                 ; 0059e099

