; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00498660(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc280
;   undefined4 DAT_005dc284
;   undefined4 DAT_005ff7ec
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0
;   engine_matrix.c_transformToCache_FUN_00507b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498660
        ;   Label: shape_edittool.cpp_FUN_00498660
    PUSH ESI                            ; 00498661
    PUSH EDI                            ; 00498662
    PUSH EBP                            ; 00498663
    SUB ESP,0x54                        ; 00498664
    MOV EBP,dword ptr [ESP + 0x68]      ; 00498667
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0049866b
    LEA EBX,[ESP + 0x18]                ; 0049866f
    MOV EAX,EBP                         ; 00498673
    FLD float ptr [EAX]                 ; 00498675
    FMUL float ptr [0x005ff7ec]         ; 00498677 | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 0049867d
    FLD float ptr [EAX + 0x4]           ; 0049867f
    FMUL float ptr [0x005ff7ec]         ; 00498682 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 00498688
    FLD float ptr [EAX + 0x8]           ; 0049868b
    FMUL float ptr [0x005ff7ec]         ; 0049868e | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 00498694
    LEA EAX,[ESP + 0x18]                ; 00498697
    PUSH EAX                            ; 0049869b
    PUSH 0x0                            ; 0049869c
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 0049869e
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x005dc280]          ; 004986a3 | DAT_005dc280
    FLD float ptr [EDI]                 ; 004986a9
    FMUL ST1                            ; 004986ab
    FLD float ptr [EDI + 0x4]           ; 004986ad
    FMUL ST2                            ; 004986b0
    FLD float ptr [EDI + 0x8]           ; 004986b2
    FMULP ST3                           ; 004986b5
    LEA ESI,[ESP + 0x38]                ; 004986b7
    ADD ESP,0x8                         ; 004986bb
    LEA EDI,[ESP + 0x48]                ; 004986be
    FXCH                                ; 004986c2
    FSTP float ptr [ESP + 0x30]         ; 004986c4
    FSTP float ptr [ESP + 0x34]         ; 004986c8
    FSTP float ptr [ESP + 0x38]         ; 004986cc
    MOVSD ES:EDI,ESI                    ; 004986d0
    MOVSD ES:EDI,ESI                    ; 004986d1
    MOVSD ES:EDI,ESI                    ; 004986d2
    FLD float ptr [0x005dc284]          ; 004986d3 | DAT_005dc284
    FLD float ptr [EBP]                 ; 004986d9
    FMUL ST1                            ; 004986dc
    FLD float ptr [EBP + 0x4]           ; 004986de
    FMUL ST2                            ; 004986e1
    FLD float ptr [EBP + 0x8]           ; 004986e3
    FMULP ST3                           ; 004986e6
    LEA EBX,[ESP + 0x18]                ; 004986e8
    LEA EDI,[ESP + 0xc]                 ; 004986ec
    LEA ESI,[ESP + 0x3c]                ; 004986f0
    FXCH                                ; 004986f4
    FSTP float ptr [ESP + 0x3c]         ; 004986f6
    FSTP float ptr [ESP + 0x40]         ; 004986fa
    FSTP float ptr [ESP + 0x44]         ; 004986fe
    MOVSD ES:EDI,ESI                    ; 00498702
    MOVSD ES:EDI,ESI                    ; 00498703
    MOVSD ES:EDI,ESI                    ; 00498704
    LEA EAX,[ESP + 0x24]                ; 00498705
    FLD float ptr [ESP + 0xc]           ; 00498709
    FLD float ptr [ESP + 0x10]          ; 0049870d
    FLD float ptr [ESP + 0x14]          ; 00498711
    LEA EDI,[ESP + 0x24]                ; 00498715
    MOV ESI,ESP                         ; 00498719
    FXCH ST2                            ; 0049871b
    FADD float ptr [ESP + 0x48]         ; 0049871d
    FXCH                                ; 00498721
    FADD float ptr [ESP + 0x4c]         ; 00498723
    FXCH ST2                            ; 00498727
    FADD float ptr [ESP + 0x50]         ; 00498729
    FXCH                                ; 0049872d
    FSTP float ptr [ESP]                ; 0049872f
    FXCH                                ; 00498732
    FSTP float ptr [ESP + 0x4]          ; 00498734
    FSTP float ptr [ESP + 0x8]          ; 00498738
    MOVSD ES:EDI,ESI                    ; 0049873c
    MOVSD ES:EDI,ESI                    ; 0049873d
    MOVSD ES:EDI,ESI                    ; 0049873e
    FLD float ptr [EAX]                 ; 0049873f
    FMUL float ptr [0x005ff7ec]         ; 00498741 | DAT_005ff7ec
    FISTP dword ptr [EBX]               ; 00498747
    FLD float ptr [EAX + 0x4]           ; 00498749
    FMUL float ptr [0x005ff7ec]         ; 0049874c | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x4]         ; 00498752
    FLD float ptr [EAX + 0x8]           ; 00498755
    FMUL float ptr [0x005ff7ec]         ; 00498758 | DAT_005ff7ec
    FISTP dword ptr [EBX + 0x8]         ; 0049875e
    LEA EAX,[ESP + 0x18]                ; 00498761
    PUSH EAX                            ; 00498765
    PUSH 0x1                            ; 00498766
    CALL engine_matrix.c_transformToCache_FUN_00507b00 ; 00498768
        ;   XREF to: 00507b00 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_00507b00(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0049876d
    MOV ESI,0x629044                    ; 00498770
    SUB ESP,0x30                        ; 00498775
    MOV ECX,0xc                         ; 00498778
    MOV EDI,ESP                         ; 0049877d
    MOVSD.REP ES:EDI,ESI                ; 0049877f
    SUB ESP,0x30                        ; 00498781
    MOV ECX,0xc                         ; 00498784
    MOV ESI,0x629014                    ; 00498789
    MOV EDI,ESP                         ; 0049878e
    MOVSD.REP ES:EDI,ESI                ; 00498790
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 00498792
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407af0(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00498797
    ADD ESP,0x54                        ; 0049879a
    POP EBP                             ; 0049879d
    POP EDI                             ; 0049879e
    POP ESI                             ; 0049879f
    POP EBX                             ; 004987a0
    RET                                 ; 004987a1

