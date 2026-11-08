; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0053cad0(int param_1,undefined4 *param_2)
;
; Local Variables:
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
;   FUN_0055e8b0 at 0055eeaf
;
; Referenced Globals:
;   undefined4 DAT_005d0ac6
;   undefined4 DAT_005d0aca
;   undefined4 DAT_0203b37c
;
; Called Functions:
;   FUN_00473cd0
;   FUN_0053d270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cad0
        ;   Label: FUN_0053cad0
    PUSH EBP                            ; 0053cad1
    MOV EBP,ESP                         ; 0053cad2
    SUB ESP,0x24                        ; 0053cad4
    AND ESP,0xfffffff8                  ; 0053cad7
    MOV EBX,dword ptr [EBP + 0xc]       ; 0053cada
    MOV EDX,dword ptr [EBP + 0x10]      ; 0053cadd
    LEA EAX,[ESP + 0x10]                ; 0053cae0
    CMP EAX,EDX                         ; 0053cae4
    JNZ 0x0053cbcf                      ; 0053cae6
        ;   XREF to: 0053cbcf (CONDITIONAL_JUMP)  ; LAB_0053cbcf
    LEA EAX,[ESP + 0x4]                 ; 0053caec
        ;   Label: LAB_0053caec
    CMP EAX,EDX                         ; 0053caf0
    JZ 0x0053cb08                       ; 0053caf2
        ;   XREF to: 0053cb08 (CONDITIONAL_JUMP)  ; LAB_0053cb08
    MOV EAX,dword ptr [EDX]             ; 0053caf4
    MOV dword ptr [ESP + 0x4],EAX       ; 0053caf6
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053cafa
    MOV dword ptr [ESP + 0x8],EAX       ; 0053cafd
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053cb01
    MOV dword ptr [ESP + 0xc],EAX       ; 0053cb04
    LEA EAX,[EBX + 0x14d134]            ; 0053cb08
        ;   Label: LAB_0053cb08
    FLD float ptr [ESP + 0x14]          ; 0053cb0e
    PUSH EAX                            ; 0053cb12
    LEA EAX,[EBX + 0x14d128]            ; 0053cb13
    FLD float ptr [ESP + 0xc]           ; 0053cb19
    PUSH EAX                            ; 0053cb1d
    LEA EAX,[ESP + 0xc]                 ; 0053cb1e
    FXCH                                ; 0053cb22
    FADD float ptr [0x005d0ac6]         ; 0053cb24 | DAT_005d0ac6
    PUSH EAX                            ; 0053cb2a
    LEA EAX,[ESP + 0x1c]                ; 0053cb2b
    FXCH                                ; 0053cb2f
    FADD float ptr [0x005d0aca]         ; 0053cb31 | DAT_005d0aca
    PUSH EAX                            ; 0053cb37
    FXCH                                ; 0053cb38
    FSTP float ptr [ESP + 0x24]         ; 0053cb3a
    PUSH 0x203b37c                      ; 0053cb3e | DAT_0203b37c
    FSTP float ptr [ESP + 0x1c]         ; 0053cb43
    CALL FUN_00473cd0                   ; 0053cb47
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00473cd0()
    MOV dword ptr [ESP + 0x34],EAX      ; 0053cb4c
    FLD float ptr [ESP + 0x34]          ; 0053cb50
    ADD ESP,0x14                        ; 0053cb54
    FST float ptr [ESP]                 ; 0053cb57
    FLDZ                                ; 0053cb5a
    FCOMPP                              ; 0053cb5c
    FNSTSW AX                           ; 0053cb5e
    SAHF                                ; 0053cb60
    JBE 0x0053cb6a                      ; 0053cb61
        ;   XREF to: 0053cb6a (CONDITIONAL_JUMP)  ; LAB_0053cb6a
    MOV dword ptr [ESP],0x3f8147ae      ; 0053cb63
    FLD float ptr [ESP]                 ; 0053cb6a
        ;   Label: LAB_0053cb6a
    FLD1                                ; 0053cb6d
    FCOMPP                              ; 0053cb6f
    FNSTSW AX                           ; 0053cb71
    SAHF                                ; 0053cb73
    JBE 0x0053cb8b                      ; 0053cb74
        ;   XREF to: 0053cb8b (CONDITIONAL_JUMP)  ; LAB_0053cb8b
    CMP dword ptr [EBX + 0x14d134],0x0  ; 0053cb76
    JNZ 0x0053cb8b                      ; 0053cb7d
        ;   XREF to: 0053cb8b (CONDITIONAL_JUMP)  ; LAB_0053cb8b
    MOV EAX,dword ptr [EBX + 0x15f694]  ; 0053cb7f
    MOV dword ptr [EBX + 0x14d134],EAX  ; 0053cb85
    LEA EAX,[ESP + 0x4]                 ; 0053cb8b
        ;   Label: LAB_0053cb8b
    PUSH dword ptr [ESP]                ; 0053cb8f
    PUSH EAX                            ; 0053cb92
    LEA EAX,[ESP + 0x18]                ; 0053cb93
    PUSH EAX                            ; 0053cb97
    PUSH 0xbf800000                     ; 0053cb98
    PUSH EBX                            ; 0053cb9d
    CALL FUN_0053d270                   ; 0053cb9e
        ;   XREF to: 0053d270 (UNCONDITIONAL_CALL)  ; undefined FUN_0053d270()
    MOV dword ptr [ESP + 0x34],EAX      ; 0053cba3
    FLD float ptr [ESP + 0x34]          ; 0053cba7
    ADD ESP,0x14                        ; 0053cbab
    FLD float ptr [ESP + 0x8]           ; 0053cbae
    FSUB float ptr [ESP + 0x14]         ; 0053cbb2
    FXCH                                ; 0053cbb6
    FSTP float ptr [ESP]                ; 0053cbb8
    FMUL float ptr [ESP]                ; 0053cbbb
    FADD float ptr [ESP + 0x14]         ; 0053cbbe
    FSTP float ptr [ESP + 0x1c]         ; 0053cbc2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053cbc6
    MOV ESP,EBP                         ; 0053cbca
    POP EBP                             ; 0053cbcc
    POP EBX                             ; 0053cbcd
    RET                                 ; 0053cbce
    MOV EAX,dword ptr [EDX]             ; 0053cbcf
        ;   Label: LAB_0053cbcf
    MOV dword ptr [ESP + 0x10],EAX      ; 0053cbd1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0053cbd5
    MOV dword ptr [ESP + 0x14],EAX      ; 0053cbd8
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053cbdc
    MOV dword ptr [ESP + 0x18],EAX      ; 0053cbdf
    JMP 0x0053caec                      ; 0053cbe3
        ;   XREF to: 0053caec (UNCONDITIONAL_JUMP)  ; LAB_0053caec

