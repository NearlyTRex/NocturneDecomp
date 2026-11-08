; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dece0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004157c0 at 00415c22
;   FUN_00461530 at 004615a5
;   FUN_00466470 at 004664e7
;   FUN_004df050 at 004df3ab
;   FUN_004df440 at 004df4a1
;   FUN_0053a6c0 at 0053aac6
;
; Referenced Globals:
;   undefined4 DAT_005c66ed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dece0
        ;   Label: FUN_004dece0
    PUSH ESI                            ; 004dece1
    PUSH EDI                            ; 004dece2
    PUSH EBP                            ; 004dece3
    MOV EBP,ESP                         ; 004dece4
    SUB ESP,0x38                        ; 004dece6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dece9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004decec
    MOV EDX,dword ptr [EAX + 0x24]      ; 004decef
    LEA EAX,[EDX*0x4 + 0x0]             ; 004decf2
    SUB EAX,EDX                         ; 004decf9
    SHL EAX,0x2                         ; 004decfb
    LEA EDX,[EAX + EBX*0x1]             ; 004decfe
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ded01
    MOV ECX,dword ptr [EAX + 0x18]      ; 004ded04
    LEA EAX,[ECX*0x4 + 0x0]             ; 004ded07
    SUB EAX,ECX                         ; 004ded0e
    MOV ECX,dword ptr [EDX]             ; 004ded10
    SUB ECX,dword ptr [EBX + EAX*0x4]   ; 004ded12
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004ded15
    MOV dword ptr [EBP + -0xc],ECX      ; 004ded19
    MOV ECX,dword ptr [EDX + 0x4]       ; 004ded1c
    SUB ECX,EDI                         ; 004ded1f
    MOV dword ptr [EBP + -0x8],ECX      ; 004ded21
    MOV ECX,dword ptr [EDX + 0x8]       ; 004ded24
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004ded27
    MOV EAX,ECX                         ; 004ded2b
    SUB EAX,ESI                         ; 004ded2d
    FILD dword ptr [EBP + -0xc]         ; 004ded2f
    MOV dword ptr [EBP + -0xc],EAX      ; 004ded32
    FILD dword ptr [EBP + -0x8]         ; 004ded35
    FILD dword ptr [EBP + -0xc]         ; 004ded38
    FSTP float ptr [EBP + -0x14]        ; 004ded3b
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ded3e
    MOV ECX,dword ptr [ECX + 0x30]      ; 004ded41
    LEA EAX,[ECX*0x4 + 0x0]             ; 004ded44
    SUB EAX,ECX                         ; 004ded4b
    MOV EDI,dword ptr [EDX]             ; 004ded4d
    MOV ECX,dword ptr [EBX + EAX*0x4]   ; 004ded4f
    SUB ECX,EDI                         ; 004ded52
    FLD ST0                             ; 004ded54
    MOV dword ptr [EBP + -0xc],ECX      ; 004ded56
    MOV EDI,dword ptr [EDX + 0x8]       ; 004ded59
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 004ded5c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004ded60
    MOV ESI,dword ptr [EDX + 0x4]       ; 004ded64
    SUB EAX,EDI                         ; 004ded67
    SUB ECX,ESI                         ; 004ded69
    MOV dword ptr [EBP + -0x4],EAX      ; 004ded6b
    MOV dword ptr [EBP + -0x8],ECX      ; 004ded6e
    FILD dword ptr [EBP + -0x4]         ; 004ded71
    FXCH                                ; 004ded74
    FMUL ST1                            ; 004ded76
    FILD dword ptr [EBP + -0x8]         ; 004ded78
    FLD ST0                             ; 004ded7b
    FMUL float ptr [EBP + -0x14]        ; 004ded7d
    FSUBP ST2,ST0                       ; 004ded80
    FILD dword ptr [EBP + -0xc]         ; 004ded82
    FXCH ST2                            ; 004ded85
    FSTP float ptr [EBP + -0x1c]        ; 004ded87
    FLD ST1                             ; 004ded8a
    FMUL float ptr [EBP + -0x14]        ; 004ded8c
    FLD ST5                             ; 004ded8f
    FMULP ST4                           ; 004ded91
    FSUBRP ST3,ST0                      ; 004ded93
    FXCH ST2                            ; 004ded95
    FSTP float ptr [EBP + -0x34]        ; 004ded97
    FXCH ST3                            ; 004ded9a
    FMULP                               ; 004ded9c
    FXCH ST2                            ; 004ded9e
    FMULP                               ; 004deda0
    FSUBP                               ; 004deda2
    FSTP float ptr [EBP + -0x30]        ; 004deda4
    FLD float ptr [EBP + -0x1c]         ; 004deda7
    FMUL ST0                            ; 004dedaa
    FLD float ptr [EBP + -0x34]         ; 004dedac
    FMUL ST0                            ; 004dedaf
    FADDP                               ; 004dedb1
    FLD float ptr [EBP + -0x30]         ; 004dedb3
    FMUL ST0                            ; 004dedb6
    FADDP                               ; 004dedb8
    FSQRT                               ; 004dedba
    FSTP float ptr [EBP + -0x10]        ; 004dedbc
    TEST dword ptr [EBP + -0x10],0x7fffffff ; 004dedbf
    JNZ 0x004dedcf                      ; 004dedc6
        ;   XREF to: 004dedcf (CONDITIONAL_JUMP)  ; LAB_004dedcf
    MOV dword ptr [EBP + -0x10],0x477fff00 ; 004dedc8
    FLD1                                ; 004dedcf
        ;   Label: LAB_004dedcf
    FDIV float ptr [EBP + -0x10]        ; 004dedd1
    FLD float ptr [EBP + -0x1c]         ; 004dedd4
    FMUL ST1                            ; 004dedd7
    FLD double ptr [0x005c66ed]         ; 004dedd9 | DAT_005c66ed
    FXCH                                ; 004deddf
    FMUL ST1                            ; 004dede1
    FSTP float ptr [EBP + -0x1c]        ; 004dede3
    FLD float ptr [EBP + -0x34]         ; 004dede6
    FMUL ST2                            ; 004dede9
    FMUL ST1                            ; 004dedeb
    FSTP float ptr [EBP + -0x34]        ; 004deded
    FLD float ptr [EBP + -0x30]         ; 004dedf0
    FMULP ST2                           ; 004dedf3
    FMULP                               ; 004dedf5
    FSTP float ptr [EBP + -0x30]        ; 004dedf7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004dedfa
    MOV EDX,dword ptr [EDX + 0x18]      ; 004dedfd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dee00
    SUB EAX,EDX                         ; 004dee07
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004dee09
    FMUL float ptr [EBP + -0x34]        ; 004dee0d
    FILD dword ptr [EBX + EAX*0x4]      ; 004dee10
    FMUL float ptr [EBP + -0x1c]        ; 004dee13
    FADDP                               ; 004dee16
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004dee18
    FMUL float ptr [EBP + -0x30]        ; 004dee1c
    FADDP                               ; 004dee1f
    FSTP float ptr [EBP + -0x2c]        ; 004dee21
    MOV EBX,dword ptr [EBP + 0x18]      ; 004dee24
    FLD float ptr [EBP + 0xffffffe4]    ; 004dee2a
    FISTP dword ptr [EBX + 0x8]         ; 004dee30
    FLD float ptr [EBP + 0xffffffcc]    ; 004dee33
    FISTP dword ptr [EBX + 0xc]         ; 004dee39
    FLD float ptr [EBP + 0xffffffd0]    ; 004dee3c
    FISTP dword ptr [EBX + 0x10]        ; 004dee42
    FLD float ptr [EBP + 0xffffffd4]    ; 004dee45
    FISTP dword ptr [EBX + 0x14]        ; 004dee4b
    MOV ESP,EBP                         ; 004dee4e
    POP EBP                             ; 004dee50
    POP EDI                             ; 004dee51
    POP ESI                             ; 004dee52
    POP EBX                             ; 004dee53
    RET                                 ; 004dee54

