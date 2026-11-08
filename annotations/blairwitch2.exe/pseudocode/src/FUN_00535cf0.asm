; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00535cf0(int param_1,undefined4 *param_2)
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
;   FUN_00558d50 at 0055934f
;
; Referenced Globals:
;   undefined4 DAT_005e5dad
;   undefined4 DAT_005e5db1
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_00472c60
;   FUN_00536490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535cf0
        ;   Label: FUN_00535cf0
    PUSH EBP                            ; 00535cf1
    MOV EBP,ESP                         ; 00535cf2
    SUB ESP,0x24                        ; 00535cf4
    AND ESP,0xfffffff8                  ; 00535cf7
    MOV EBX,dword ptr [EBP + 0xc]       ; 00535cfa
    MOV EDX,dword ptr [EBP + 0x10]      ; 00535cfd
    LEA EAX,[ESP + 0x10]                ; 00535d00
    CMP EAX,EDX                         ; 00535d04
    JNZ 0x00535def                      ; 00535d06
        ;   XREF to: 00535def (CONDITIONAL_JUMP)  ; LAB_00535def
    LEA EAX,[ESP + 0x4]                 ; 00535d0c
        ;   Label: LAB_00535d0c
    CMP EAX,EDX                         ; 00535d10
    JZ 0x00535d28                       ; 00535d12
        ;   XREF to: 00535d28 (CONDITIONAL_JUMP)  ; LAB_00535d28
    MOV EAX,dword ptr [EDX]             ; 00535d14
    MOV dword ptr [ESP + 0x4],EAX       ; 00535d16
    MOV EAX,dword ptr [EDX + 0x4]       ; 00535d1a
    MOV dword ptr [ESP + 0x8],EAX       ; 00535d1d
    MOV EAX,dword ptr [EDX + 0x8]       ; 00535d21
    MOV dword ptr [ESP + 0xc],EAX       ; 00535d24
    LEA EAX,[EBX + 0x14d134]            ; 00535d28
        ;   Label: LAB_00535d28
    FLD float ptr [ESP + 0x14]          ; 00535d2e
    PUSH EAX                            ; 00535d32
    LEA EAX,[EBX + 0x14d128]            ; 00535d33
    FLD float ptr [ESP + 0xc]           ; 00535d39
    PUSH EAX                            ; 00535d3d
    LEA EAX,[ESP + 0xc]                 ; 00535d3e
    FXCH                                ; 00535d42
    FADD float ptr [0x005e5dad]         ; 00535d44 | DAT_005e5dad
    PUSH EAX                            ; 00535d4a
    LEA EAX,[ESP + 0x1c]                ; 00535d4b
    FXCH                                ; 00535d4f
    FADD float ptr [0x005e5db1]         ; 00535d51 | DAT_005e5db1
    PUSH EAX                            ; 00535d57
    FXCH                                ; 00535d58
    FSTP float ptr [ESP + 0x24]         ; 00535d5a
    PUSH 0x1fc9c68                      ; 00535d5e | DAT_01fc9c68
    FSTP float ptr [ESP + 0x1c]         ; 00535d63
    CALL FUN_00472c60                   ; 00535d67
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00472c60()
    MOV dword ptr [ESP + 0x34],EAX      ; 00535d6c
    FLD float ptr [ESP + 0x34]          ; 00535d70
    ADD ESP,0x14                        ; 00535d74
    FST float ptr [ESP]                 ; 00535d77
    FLDZ                                ; 00535d7a
    FCOMPP                              ; 00535d7c
    FNSTSW AX                           ; 00535d7e
    SAHF                                ; 00535d80
    JBE 0x00535d8a                      ; 00535d81
        ;   XREF to: 00535d8a (CONDITIONAL_JUMP)  ; LAB_00535d8a
    MOV dword ptr [ESP],0x3f8147ae      ; 00535d83
    FLD float ptr [ESP]                 ; 00535d8a
        ;   Label: LAB_00535d8a
    FLD1                                ; 00535d8d
    FCOMPP                              ; 00535d8f
    FNSTSW AX                           ; 00535d91
    SAHF                                ; 00535d93
    JBE 0x00535dab                      ; 00535d94
        ;   XREF to: 00535dab (CONDITIONAL_JUMP)  ; LAB_00535dab
    CMP dword ptr [EBX + 0x14d134],0x0  ; 00535d96
    JNZ 0x00535dab                      ; 00535d9d
        ;   XREF to: 00535dab (CONDITIONAL_JUMP)  ; LAB_00535dab
    MOV EAX,dword ptr [EBX + 0x15f690]  ; 00535d9f
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00535da5
    LEA EAX,[ESP + 0x4]                 ; 00535dab
        ;   Label: LAB_00535dab
    PUSH dword ptr [ESP]                ; 00535daf
    PUSH EAX                            ; 00535db2
    LEA EAX,[ESP + 0x18]                ; 00535db3
    PUSH EAX                            ; 00535db7
    PUSH 0xbf800000                     ; 00535db8
    PUSH EBX                            ; 00535dbd
    CALL FUN_00536490                   ; 00535dbe
        ;   XREF to: 00536490 (UNCONDITIONAL_CALL)  ; undefined FUN_00536490()
    MOV dword ptr [ESP + 0x34],EAX      ; 00535dc3
    FLD float ptr [ESP + 0x34]          ; 00535dc7
    ADD ESP,0x14                        ; 00535dcb
    FLD float ptr [ESP + 0x8]           ; 00535dce
    FSUB float ptr [ESP + 0x14]         ; 00535dd2
    FXCH                                ; 00535dd6
    FSTP float ptr [ESP]                ; 00535dd8
    FMUL float ptr [ESP]                ; 00535ddb
    FADD float ptr [ESP + 0x14]         ; 00535dde
    FSTP float ptr [ESP + 0x1c]         ; 00535de2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00535de6
    MOV ESP,EBP                         ; 00535dea
    POP EBP                             ; 00535dec
    POP EBX                             ; 00535ded
    RET                                 ; 00535dee
    MOV EAX,dword ptr [EDX]             ; 00535def
        ;   Label: LAB_00535def
    MOV dword ptr [ESP + 0x10],EAX      ; 00535df1
    MOV EAX,dword ptr [EDX + 0x4]       ; 00535df5
    MOV dword ptr [ESP + 0x14],EAX      ; 00535df8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00535dfc
    MOV dword ptr [ESP + 0x18],EAX      ; 00535dff
    JMP 0x00535d0c                      ; 00535e03
        ;   XREF to: 00535d0c (UNCONDITIONAL_JUMP)  ; LAB_00535d0c

