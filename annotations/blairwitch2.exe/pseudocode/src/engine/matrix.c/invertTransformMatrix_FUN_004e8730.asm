; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_invertTransformMatrix_FUN_004e8730(void)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; XREF[4]:
;   core_inv.cpp_FUN_004da130 at 004da25c
;   core_inv.cpp_FUN_004dd9b0 at 004de4d3
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060 at 0046b272
;   engine_matrix.c_buildRotationMatrix_FUN_004e8a10 at 004e8cf4
;
; Referenced Globals:
;   undefined4 DAT_005dc78e
;   undefined4 DAT_005dc796
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01c38bbc
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   ... and 14 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e8730
        ;   Label: engine_matrix.c_invertTransformMatrix_FUN_004e8730
    MOV EBP,ESP                         ; 004e8731
    SUB ESP,0x54                        ; 004e8733
    AND ESP,0xfffffff8                  ; 004e8736
    FILD dword ptr [0x01c38b9c]         ; 004e8739 | DAT_01c38b9c
    FMUL double ptr [0x005dc78e]        ; 004e873f | DAT_005dc78e
    FILD dword ptr [0x01c38ba0]         ; 004e8745 | DAT_01c38ba0
    FMUL double ptr [0x005dc78e]        ; 004e874b | DAT_005dc78e
    FILD dword ptr [0x01c38ba4]         ; 004e8751 | DAT_01c38ba4
    FMUL double ptr [0x005dc78e]        ; 004e8757 | DAT_005dc78e
    FILD dword ptr [0x01c38ba8]         ; 004e875d | DAT_01c38ba8
    FMUL double ptr [0x005dc78e]        ; 004e8763 | DAT_005dc78e
    FILD dword ptr [0x01c38bac]         ; 004e8769 | DAT_01c38bac
    FMUL double ptr [0x005dc78e]        ; 004e876f | DAT_005dc78e
    FILD dword ptr [0x01c38bb0]         ; 004e8775 | DAT_01c38bb0
    FMUL double ptr [0x005dc78e]        ; 004e877b | DAT_005dc78e
    FILD dword ptr [0x01c38bb4]         ; 004e8781 | DAT_01c38bb4
    FMUL double ptr [0x005dc78e]        ; 004e8787 | DAT_005dc78e
    FXCH ST6                            ; 004e878d
    FSTP float ptr [ESP + 0x48]         ; 004e878f
    FILD dword ptr [0x01c38bb8]         ; 004e8793 | DAT_01c38bb8
    FMUL double ptr [0x005dc78e]        ; 004e8799 | DAT_005dc78e
    FXCH ST2                            ; 004e879f
    FSTP float ptr [ESP + 0x3c]         ; 004e87a1
    FILD dword ptr [0x01c38bbc]         ; 004e87a5 | DAT_01c38bbc
    FMUL double ptr [0x005dc78e]        ; 004e87ab | DAT_005dc78e
    FXCH                                ; 004e87b1
    FSTP float ptr [ESP + 0x34]         ; 004e87b3
    FLD float ptr [ESP + 0x3c]          ; 004e87b7
    FXCH                                ; 004e87bb
    FSTP float ptr [ESP + 0x14]         ; 004e87bd
    FMUL float ptr [ESP + 0x14]         ; 004e87c1
    FXCH                                ; 004e87c5
    FSTP float ptr [ESP + 0x40]         ; 004e87c7
    FLD float ptr [ESP + 0x34]          ; 004e87cb
    FMUL float ptr [ESP + 0x40]         ; 004e87cf
    FXCH ST4                            ; 004e87d3
    FST float ptr [ESP + 0x50]          ; 004e87d5
    FMUL float ptr [ESP + 0x14]         ; 004e87d9
    FXCH ST3                            ; 004e87dd
    FSTP float ptr [ESP + 0x4c]         ; 004e87df
    FLD float ptr [ESP + 0x48]          ; 004e87e3
    FMUL float ptr [ESP + 0x14]         ; 004e87e7
    FLD float ptr [ESP + 0x4c]          ; 004e87eb
    FMUL float ptr [ESP + 0x40]         ; 004e87ef
    FXCH ST2                            ; 004e87f3
    FSTP float ptr [ESP + 0x18]         ; 004e87f5
    FXCH ST4                            ; 004e87f9
    FSUBR float ptr [ESP + 0x18]        ; 004e87fb
    FLD float ptr [ESP + 0x48]          ; 004e87ff
    FXCH                                ; 004e8803
    FSTP float ptr [ESP + 0x2c]         ; 004e8805
    FMUL float ptr [ESP + 0x2c]         ; 004e8809
    FXCH ST2                            ; 004e880d
    FST float ptr [ESP + 0x44]          ; 004e880f
    FMUL float ptr [ESP + 0x14]         ; 004e8813
    FXCH ST5                            ; 004e8817
    FSTP float ptr [ESP + 0x38]         ; 004e8819
    FLD float ptr [ESP + 0x34]          ; 004e881d
    FMUL float ptr [ESP + 0x38]         ; 004e8821
    FLD float ptr [ESP + 0x4c]          ; 004e8825
    FMUL float ptr [ESP + 0x38]         ; 004e8829
    FXCH                                ; 004e882d
    FSUBP ST6,ST0                       ; 004e882f
    MOV EAX,[0x01c38b9c]                ; 004e8831 | DAT_01c38b9c
    FLD float ptr [ESP + 0x50]          ; 004e8836
    FMUL ST6                            ; 004e883a
    MOV [0x01d04fe0],EAX                ; 004e883c | DAT_01d04fe0
    FSUBP ST3,ST0                       ; 004e8841
    MOV EAX,[0x01c38ba0]                ; 004e8843 | DAT_01c38ba0
    FLD float ptr [ESP + 0x44]          ; 004e8848
    FMUL float ptr [ESP + 0x40]         ; 004e884c
    MOV [0x01d04fe4],EAX                ; 004e8850 | DAT_01d04fe4
    MOV EAX,[0x01c38ba4]                ; 004e8855 | DAT_01c38ba4
    FSTP float ptr [ESP + 0x18]         ; 004e885a
    FLD float ptr [ESP + 0x3c]          ; 004e885e
    FMUL float ptr [ESP + 0x38]         ; 004e8862
    MOV [0x01d04fe8],EAX                ; 004e8866 | DAT_01d04fe8
    FSUBR float ptr [ESP + 0x18]        ; 004e886b
    MOV EAX,[0x01c38ba8]                ; 004e886f | DAT_01c38ba8
    FSTP float ptr [ESP + 0x30]         ; 004e8874
    FLD float ptr [ESP + 0x4c]          ; 004e8878
    FMUL float ptr [ESP + 0x30]         ; 004e887c
    MOV [0x01d04fec],EAX                ; 004e8880 | DAT_01d04fec
    FXCH ST2                            ; 004e8885
    FSUBP ST4,ST0                       ; 004e8887
    MOV EAX,[0x01c38bac]                ; 004e8889 | DAT_01c38bac
    FSUBP ST4,ST0                       ; 004e888e
    MOV [0x01d04ff0],EAX                ; 004e8890 | DAT_01d04ff0
    MOV EAX,[0x01c38bb0]                ; 004e8895 | DAT_01c38bb0
    FXCH ST2                            ; 004e889a
    FCHS                                ; 004e889c
    MOV [0x01d04ff4],EAX                ; 004e889e | DAT_01d04ff4
    MOV EAX,[0x01c38bb4]                ; 004e88a3 | DAT_01c38bb4
    FXCH ST3                            ; 004e88a8
    FSTP float ptr [ESP + 0x28]         ; 004e88aa
    MOV [0x01d04ff8],EAX                ; 004e88ae | DAT_01d04ff8
    MOV EAX,[0x01c38bb8]                ; 004e88b3 | DAT_01c38bb8
    FXCH ST2                            ; 004e88b8
    FSTP float ptr [ESP + 0x24]         ; 004e88ba
    MOV [0x01d04ffc],EAX                ; 004e88be | DAT_01d04ffc
    FXCH ST2                            ; 004e88c3
    FCHS                                ; 004e88c5
    FSTP float ptr [ESP + 0x20]         ; 004e88c7
    MOV EAX,[0x01c38bbc]                ; 004e88cb | DAT_01c38bbc
    FADDP                               ; 004e88d0
    MOV [0x01d05000],EAX                ; 004e88d2 | DAT_01d05000
    FSTP float ptr [ESP]                ; 004e88d7
    FLD float ptr [ESP]                 ; 004e88da
    FDIVR double ptr [0x005dc796]       ; 004e88dd | DAT_005dc796
    FLD float ptr [ESP + 0x48]          ; 004e88e3
    FLD ST0                             ; 004e88e7
    FMUL float ptr [ESP + 0x40]         ; 004e88e9
    FLD float ptr [ESP + 0x34]          ; 004e88ed
    FLD float ptr [ESP + 0x50]          ; 004e88f1
    FMUL ST1                            ; 004e88f5
    FLD ST3                             ; 004e88f7
    FMULP ST2                           ; 004e88f9
    FXCH ST3                            ; 004e88fb
    FMUL float ptr [ESP + 0x3c]         ; 004e88fd
    FLD float ptr [ESP + 0x50]          ; 004e8901
    FMUL float ptr [ESP + 0x38]         ; 004e8905
    FLD float ptr [ESP + 0x4c]          ; 004e8909
    FXCH                                ; 004e890d
    FSUBP ST4,ST0                       ; 004e890f
    FMUL float ptr [ESP + 0x3c]         ; 004e8911
    FXCH ST3                            ; 004e8915
    FCHS                                ; 004e8917
    FSTP float ptr [ESP + 0x8]          ; 004e8919
    FLD float ptr [ESP + 0x4c]          ; 004e891d
    FMUL float ptr [ESP + 0x44]         ; 004e8921
    FLD float ptr [ESP + 0x50]          ; 004e8925
    FMUL float ptr [ESP + 0x44]         ; 004e8929
    FXCH ST4                            ; 004e892d
    FSUBP ST5,ST0                       ; 004e892f
    FLD float ptr [ESP + 0x2c]          ; 004e8931
    FXCH ST6                            ; 004e8935
    FSTP float ptr [ESP]                ; 004e8937
    FXCH ST5                            ; 004e893a
    FMUL float ptr [ESP]                ; 004e893c
    FLD float ptr [ESP + 0x24]          ; 004e893f
    FXCH ST6                            ; 004e8943
    FSUBP ST3,ST0                       ; 004e8945
    FXCH ST5                            ; 004e8947
    FMUL float ptr [ESP]                ; 004e8949
    FXCH ST2                            ; 004e894c
    FCHS                                ; 004e894e
    FXCH ST4                            ; 004e8950
    FMUL float ptr [ESP]                ; 004e8952
    FLD float ptr [ESP + 0x20]          ; 004e8955
    FMUL float ptr [ESP]                ; 004e8959
    FXCH ST4                            ; 004e895c
    FSUBP ST2,ST0                       ; 004e895e
    FXCH                                ; 004e8960
    FSTP float ptr [ESP + 0x10]         ; 004e8962
    FLD float ptr [ESP + 0x28]          ; 004e8966
    FMUL float ptr [ESP]                ; 004e896a
    FXCH ST4                            ; 004e896d
    FMUL float ptr [ESP]                ; 004e896f
    FLD float ptr [ESP + 0x30]          ; 004e8972
    FMUL float ptr [ESP]                ; 004e8976
    FXCH ST6                            ; 004e8979
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e897b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01d04fb8]        ; 004e8980 | DAT_01d04fb8
    FLD float ptr [ESP + 0x8]           ; 004e8986
    FMUL float ptr [ESP]                ; 004e898a
    FXCH ST3                            ; 004e898d
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e898f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01d04fbc]        ; 004e8994 | DAT_01d04fbc
    FLD float ptr [ESP + 0x10]          ; 004e899a
    FMUL float ptr [ESP]                ; 004e899e
    FXCH ST2                            ; 004e89a1
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e89a3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST4                            ; 004e89a8
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e89aa
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST5                            ; 004e89af
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e89b1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004e89b6
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e89b8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST6                            ; 004e89bd
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e89bf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 004e89c4
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e89c6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004e89cb
    CALL crt_math.c_round_FUN_005b7ff0  ; 004e89cd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST4                            ; 004e89d2
    FISTP dword ptr [0x01d04fc0]        ; 004e89d4 | DAT_01d04fc0
    FXCH ST4                            ; 004e89da
    FISTP dword ptr [0x01d04fc4]        ; 004e89dc | DAT_01d04fc4
    FXCH ST3                            ; 004e89e2
    FISTP dword ptr [0x01d04fc8]        ; 004e89e4 | DAT_01d04fc8
    FXCH ST3                            ; 004e89ea
    FISTP dword ptr [0x01d04fcc]        ; 004e89ec | DAT_01d04fcc
    FXCH ST2                            ; 004e89f2
    FISTP dword ptr [0x01d04fd0]        ; 004e89f4 | DAT_01d04fd0
    FISTP dword ptr [0x01d04fd4]        ; 004e89fa | DAT_01d04fd4
    FISTP dword ptr [0x01d04fd8]        ; 004e8a00 | DAT_01d04fd8
    MOV ESP,EBP                         ; 004e8a06
    POP EBP                             ; 004e8a08
    RET                                 ; 004e8a09

