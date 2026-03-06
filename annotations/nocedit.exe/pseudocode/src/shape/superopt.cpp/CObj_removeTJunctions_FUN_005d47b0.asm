; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   validate_first
; Local Variables:
; undefined8       Stack[-0x2e0]:8  local_2e0
; undefined8       Stack[-0x2d8]:8  local_2d8
; undefined8       Stack[-0x2d0]:8  local_2d0
; undefined8       Stack[-0x2c8]:8  local_2c8
; undefined8       Stack[-0x2c0]:8  local_2c0
; undefined8       Stack[-0x2b8]:8  local_2b8
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined8       Stack[-0x2a0]:8  local_2a0
; undefined8       Stack[-0x298]:8  local_298
; undefined8       Stack[-0x290]:8  local_290
; undefined8       Stack[-0x288]:8  local_288
; undefined8       Stack[-0x280]:8  local_280
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x274]:4  local_274
; undefined8       Stack[-0x270]:8  local_270
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined8       Stack[-0x260]:8  local_260
; undefined8       Stack[-0x258]:8  local_258
; undefined8       Stack[-0x250]:8  local_250
; undefined8       Stack[-0x248]:8  local_248
; undefined8       Stack[-0x240]:8  local_240
; undefined8       Stack[-0x238]:8  local_238
; undefined8       Stack[-0x230]:8  local_230
; undefined8       Stack[-0x228]:8  local_228
; undefined8       Stack[-0x220]:8  local_220
; undefined8       Stack[-0x218]:8  local_218
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined1       Stack[-0x200]:1  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined1       Stack[-0x198]:1  local_198
; undefined8       Stack[-0x13c]:8  local_13c
; undefined8       Stack[-0x134]:8  local_134
; undefined8       Stack[-0x12c]:8  local_12c
; undefined8       Stack[-0x124]:8  local_124
; undefined8       Stack[-0x11c]:8  local_11c
; undefined8       Stack[-0x114]:8  local_114
; undefined8       Stack[-0x10c]:8  local_10c
; undefined8       Stack[-0x104]:8  local_104
; undefined8       Stack[-0xfc]:8  local_fc
; undefined8       Stack[-0xf4]:8  local_f4
; undefined8       Stack[-0xec]:8  local_ec
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined8       Stack[-0xd4]:8  local_d4
; undefined8       Stack[-0xcc]:8  local_cc
; undefined8       Stack[-0xc4]:8  local_c4
; undefined8       Stack[-0xbc]:8  local_bc
; undefined8       Stack[-0xb4]:8  local_b4
; undefined8       Stack[-0xac]:8  local_ac
; undefined8       Stack[-0xa4]:8  local_a4
; undefined8       Stack[-0x9c]:8  local_9c
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
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_optimize_FUN_005d7290 at 005d72bc
;
; Referenced Globals:
;   TerminatedCString s_Deleting_T_Junctions_d_d_006544fc
;   double DOUBLE_0065452a = -0.000100000000000000
;   double DOUBLE_00654532 = 0.000100000000000000
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
;   shape_superopt.cpp_CPoly_ctor_FUN_005cc620
;   shape_superopt.cpp_CPoly_dtor_FUN_005cc660
;   shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d47b0
        ;   Label: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
    PUSH ESI                            ; 005d47b1
    PUSH EDI                            ; 005d47b2
    PUSH EBP                            ; 005d47b3
    MOV EBP,ESP                         ; 005d47b4
    SUB ESP,0x2d0                       ; 005d47b6
    AND ESP,0xfffffff8                  ; 005d47bc
    CMP dword ptr [EBP + 0x18],0x0      ; 005d47bf
    JNZ 0x005d4d5c                      ; 005d47c3
        ;   XREF to: 005d4d5c (CONDITIONAL_JUMP)  ; LAB_005d4d5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d47c9
        ;   Label: LAB_005d47c9
    XOR EBX,EBX                         ; 005d47cc
    MOV ESI,dword ptr [EAX + 0x8]       ; 005d47ce
    MOV dword ptr [ESP + 0x28c],EBX     ; 005d47d1
    CMP ESI,0x3e8                       ; 005d47d8
    JA 0x005d4d8e                       ; 005d47de
        ;   XREF to: 005d4d8e (CONDITIONAL_JUMP)  ; LAB_005d4d8e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d47e4
        ;   Label: LAB_005d47e4
    MOV EAX,dword ptr [EAX]             ; 005d47e7
    XOR EDI,EDI                         ; 005d47e9
    MOV dword ptr [ESP + 0x294],EAX     ; 005d47eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d47f2
    MOV dword ptr [ESP + 0x2ac],EDI     ; 005d47f5
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d47fc
    MOV dword ptr [ESP + 0x290],EDI     ; 005d47ff
    TEST EDX,EDX                        ; 005d4806
    JBE 0x005d4d3e                      ; 005d4808
        ;   XREF to: 005d4d3e (CONDITIONAL_JUMP)  ; LAB_005d4d3e
    CMP dword ptr [ESP + 0x28c],0x0     ; 005d480e
        ;   Label: LAB_005d480e
    JZ 0x005d4826                       ; 005d4816
        ;   XREF to: 005d4826 (CONDITIONAL_JUMP)  ; LAB_005d4826
    TEST byte ptr [ESP + 0x2ac],0xff    ; 005d4818
    JZ 0x005d4da4                       ; 005d4820
        ;   XREF to: 005d4da4 (CONDITIONAL_JUMP)  ; LAB_005d4da4
    IMUL EBX,dword ptr [ESP + 0x2ac],0x68 ; 005d4826
        ;   Label: LAB_005d4826
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d482e
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d4831
    ADD EAX,EBX                         ; 005d4834
    MOV dword ptr [ESP + 0x2b0],EAX     ; 005d4836
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d483d
    MOV dword ptr [ESP + 0x2b8],EAX     ; 005d4840
    IMUL EBX,dword ptr [ESP + 0x2b8],0x38 ; 005d4847
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 005d484f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4856
    MOV dword ptr [ESP + 0x2bc],EAX     ; 005d4859
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 005d4860
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d4867
    MOV dword ptr [ESP + 0x2b4],EAX     ; 005d486a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d4871
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d4874
    MOV EDI,dword ptr [ESP + 0x2bc]     ; 005d4877
    LEA ESI,[EAX + EBX*0x1]             ; 005d487e
    IMUL EBX,EDI,0x38                   ; 005d4881
    MOV EDX,dword ptr [ESP + 0x2b4]     ; 005d4884
    MOV dword ptr [ESP + 0x2cc],ESI     ; 005d488b
    LEA ESI,[EAX + EBX*0x1]             ; 005d4892
    IMUL EBX,EDX,0x38                   ; 005d4895
    ADD EAX,EBX                         ; 005d4898
    MOV dword ptr [ESP + 0x2c0],EAX     ; 005d489a
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d48a1
    MOV dword ptr [ESP + 0x2c8],ESI     ; 005d48a8
    FLD double ptr [EAX]                ; 005d48af
    FCOMP double ptr [ESI]              ; 005d48b1
    FNSTSW AX                           ; 005d48b3
    SAHF                                ; 005d48b5
    JNC 0x005d4dc6                      ; 005d48b6
        ;   XREF to: 005d4dc6 (CONDITIONAL_JUMP)  ; LAB_005d4dc6
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d48bc
    MOV EAX,dword ptr [EAX]             ; 005d48c3
    MOV dword ptr [ESP + 0x58],EAX      ; 005d48c5
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d48c9
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d48d0
    MOV dword ptr [ESP + 0x5c],EAX      ; 005d48d3
        ;   Label: LAB_005d48d3
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d48d7
    FLD double ptr [ESP + 0x58]         ; 005d48de
    FCOMP double ptr [EAX]              ; 005d48e2
    FNSTSW AX                           ; 005d48e4
    SAHF                                ; 005d48e6
    JNC 0x005d4ded                      ; 005d48e7
        ;   XREF to: 005d4ded (CONDITIONAL_JUMP)  ; LAB_005d4ded
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d48ed
    FLD double ptr [EAX]                ; 005d48f4
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d48f6
    FCOMP double ptr [EAX]              ; 005d48fd
    FNSTSW AX                           ; 005d48ff
    SAHF                                ; 005d4901
    JNC 0x005d4dd4                      ; 005d4902
        ;   XREF to: 005d4dd4 (CONDITIONAL_JUMP)  ; LAB_005d4dd4
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4908
    MOV EAX,dword ptr [EAX]             ; 005d490f
    MOV dword ptr [ESP + 0x30],EAX      ; 005d4911
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4915
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d491c
        ;   Label: LAB_005d491c
    MOV dword ptr [ESP + 0x34],EAX      ; 005d491f
    MOV EAX,dword ptr [ESP + 0x30]      ; 005d4923
    MOV dword ptr [ESP + 0x60],EAX      ; 005d4927
    MOV EAX,dword ptr [ESP + 0x34]      ; 005d492b
    MOV dword ptr [ESP + 0x64],EAX      ; 005d492f
        ;   Label: LAB_005d492f
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4933
    FLD double ptr [EAX + 0x8]          ; 005d493a
    FLD double ptr [ESP + 0x60]         ; 005d493d
    FADD double ptr [0x0065452a]        ; 005d4941 | DOUBLE_0065452a
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4947
    FSTP double ptr [ESP + 0xc8]        ; 005d494e
    FCOMP double ptr [EAX + 0x8]        ; 005d4955
    FNSTSW AX                           ; 005d4958
    SAHF                                ; 005d495a
    JNC 0x005d4e09                      ; 005d495b
        ;   XREF to: 005d4e09 (CONDITIONAL_JUMP)  ; LAB_005d4e09
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4961
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4968
    MOV dword ptr [ESP + 0x18],EAX      ; 005d496b
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d496f
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d4976
        ;   Label: LAB_005d4976
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d4979
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d497d
    FLD double ptr [ESP + 0x18]         ; 005d4984
    FCOMP double ptr [EAX + 0x8]        ; 005d4988
    FNSTSW AX                           ; 005d498b
    SAHF                                ; 005d498d
    JNC 0x005d4e40                      ; 005d498e
        ;   XREF to: 005d4e40 (CONDITIONAL_JUMP)  ; LAB_005d4e40
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4994
    FLD double ptr [EAX + 0x8]          ; 005d499b
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d499e
    FCOMP double ptr [EAX + 0x8]        ; 005d49a5
    FNSTSW AX                           ; 005d49a8
    SAHF                                ; 005d49aa
    JNC 0x005d4e23                      ; 005d49ab
        ;   XREF to: 005d4e23 (CONDITIONAL_JUMP)  ; LAB_005d4e23
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d49b1
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d49b8
    MOV dword ptr [ESP + 0xd0],EAX      ; 005d49bb
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d49c2
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d49c9
        ;   Label: LAB_005d49c9
    MOV dword ptr [ESP + 0xd4],EAX      ; 005d49cc
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005d49d3
    MOV dword ptr [ESP + 0x80],EAX      ; 005d49da
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005d49e1
    MOV dword ptr [ESP + 0x84],EAX      ; 005d49e8
        ;   Label: LAB_005d49e8
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d49ef
    FLD double ptr [EAX + 0x10]         ; 005d49f6
    FLD double ptr [ESP + 0x80]         ; 005d49f9
    FADD double ptr [0x0065452a]        ; 005d4a00 | DOUBLE_0065452a
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4a06
    FSTP double ptr [ESP + 0xb8]        ; 005d4a0d
    FCOMP double ptr [EAX + 0x10]       ; 005d4a14
    FNSTSW AX                           ; 005d4a17
    SAHF                                ; 005d4a19
    JNC 0x005d4e60                      ; 005d4a1a
        ;   XREF to: 005d4e60 (CONDITIONAL_JUMP)  ; LAB_005d4e60
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4a20
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4a27
    MOV dword ptr [ESP + 0x48],EAX      ; 005d4a2a
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4a2e
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d4a35
        ;   Label: LAB_005d4a35
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d4a38
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4a3c
    FLD double ptr [ESP + 0x48]         ; 005d4a43
    FCOMP double ptr [EAX + 0x10]       ; 005d4a47
    FNSTSW AX                           ; 005d4a4a
    SAHF                                ; 005d4a4c
    JNC 0x005d4e97                      ; 005d4a4d
        ;   XREF to: 005d4e97 (CONDITIONAL_JUMP)  ; LAB_005d4e97
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4a53
    FLD double ptr [EAX + 0x10]         ; 005d4a5a
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4a5d
    FCOMP double ptr [EAX + 0x10]       ; 005d4a64
    FNSTSW AX                           ; 005d4a67
    SAHF                                ; 005d4a69
    JNC 0x005d4e7a                      ; 005d4a6a
        ;   XREF to: 005d4e7a (CONDITIONAL_JUMP)  ; LAB_005d4e7a
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4a70
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4a77
    MOV dword ptr [ESP + 0xd8],EAX      ; 005d4a7a
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4a81
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d4a88
        ;   Label: LAB_005d4a88
    MOV dword ptr [ESP + 0xdc],EAX      ; 005d4a8b
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005d4a92
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d4a99
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005d4aa0
    MOV dword ptr [ESP + 0xac],EAX      ; 005d4aa7
        ;   Label: LAB_005d4aa7
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4aae
    FLD double ptr [EAX]                ; 005d4ab5
    FLD double ptr [ESP + 0xa8]         ; 005d4ab7
    FADD double ptr [0x0065452a]        ; 005d4abe | DOUBLE_0065452a
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4ac4
    FSTP double ptr [ESP + 0xb0]        ; 005d4acb
    FCOMP double ptr [EAX]              ; 005d4ad2
    FNSTSW AX                           ; 005d4ad4
    SAHF                                ; 005d4ad6
    JBE 0x005d4eb7                      ; 005d4ad7
        ;   XREF to: 005d4eb7 (CONDITIONAL_JUMP)  ; LAB_005d4eb7
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4add
    MOV EAX,dword ptr [EAX]             ; 005d4ae4
    MOV dword ptr [ESP + 0x40],EAX      ; 005d4ae6
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4aea
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d4af1
        ;   Label: LAB_005d4af1
    MOV dword ptr [ESP + 0x44],EAX      ; 005d4af4
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4af8
    FLD double ptr [ESP + 0x40]         ; 005d4aff
    FCOMP double ptr [EAX]              ; 005d4b03
    FNSTSW AX                           ; 005d4b05
    SAHF                                ; 005d4b07
    JBE 0x005d4ee9                      ; 005d4b08
        ;   XREF to: 005d4ee9 (CONDITIONAL_JUMP)  ; LAB_005d4ee9
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4b0e
    FLD double ptr [EAX]                ; 005d4b15
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4b17
    FCOMP double ptr [EAX]              ; 005d4b1e
    FNSTSW AX                           ; 005d4b20
    SAHF                                ; 005d4b22
    JBE 0x005d4ed0                      ; 005d4b23
        ;   XREF to: 005d4ed0 (CONDITIONAL_JUMP)  ; LAB_005d4ed0
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4b29
    MOV EAX,dword ptr [EAX]             ; 005d4b30
    MOV dword ptr [ESP + 0x78],EAX      ; 005d4b32
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4b36
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d4b3d
        ;   Label: LAB_005d4b3d
    MOV dword ptr [ESP + 0x7c],EAX      ; 005d4b40
    MOV EAX,dword ptr [ESP + 0x78]      ; 005d4b44
    MOV dword ptr [ESP + 0x70],EAX      ; 005d4b48
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005d4b4c
    MOV dword ptr [ESP + 0x74],EAX      ; 005d4b50
        ;   Label: LAB_005d4b50
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4b54
    FLD double ptr [EAX + 0x8]          ; 005d4b5b
    FLD double ptr [ESP + 0x70]         ; 005d4b5e
    FADD double ptr [0x00654532]        ; 005d4b62 | DOUBLE_00654532
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4b68
    FSTP double ptr [ESP + 0x50]        ; 005d4b6f
    FCOMP double ptr [EAX + 0x8]        ; 005d4b73
    FNSTSW AX                           ; 005d4b76
    SAHF                                ; 005d4b78
    JBE 0x005d4f05                      ; 005d4b79
        ;   XREF to: 005d4f05 (CONDITIONAL_JUMP)  ; LAB_005d4f05
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4b7f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4b86
    MOV dword ptr [ESP + 0x8],EAX       ; 005d4b89
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4b8d
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d4b94
        ;   Label: LAB_005d4b94
    MOV dword ptr [ESP + 0xc],EAX       ; 005d4b97
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4b9b
    FLD double ptr [ESP + 0x8]          ; 005d4ba2
    FCOMP double ptr [EAX + 0x8]        ; 005d4ba6
    FNSTSW AX                           ; 005d4ba9
    SAHF                                ; 005d4bab
    JBE 0x005d4f39                      ; 005d4bac
        ;   XREF to: 005d4f39 (CONDITIONAL_JUMP)  ; LAB_005d4f39
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4bb2
    FLD double ptr [EAX + 0x8]          ; 005d4bb9
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4bbc
    FCOMP double ptr [EAX + 0x8]        ; 005d4bc3
    FNSTSW AX                           ; 005d4bc6
    SAHF                                ; 005d4bc8
    JBE 0x005d4f1f                      ; 005d4bc9
        ;   XREF to: 005d4f1f (CONDITIONAL_JUMP)  ; LAB_005d4f1f
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4bcf
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4bd6
    MOV dword ptr [ESP + 0x38],EAX      ; 005d4bd9
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4bdd
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d4be4
        ;   Label: LAB_005d4be4
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d4be7
    MOV EAX,dword ptr [ESP + 0x38]      ; 005d4beb
    MOV dword ptr [ESP + 0x20],EAX      ; 005d4bef
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005d4bf3
    MOV dword ptr [ESP + 0x24],EAX      ; 005d4bf7
        ;   Label: LAB_005d4bf7
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4bfb
    FLD double ptr [EAX + 0x10]         ; 005d4c02
    FLD double ptr [ESP + 0x20]         ; 005d4c05
    FADD double ptr [0x00654532]        ; 005d4c09 | DOUBLE_00654532
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4c0f
    FSTP double ptr [ESP + 0x90]        ; 005d4c16
    FCOMP double ptr [EAX + 0x10]       ; 005d4c1d
    FNSTSW AX                           ; 005d4c20
    SAHF                                ; 005d4c22
    JBE 0x005d4f56                      ; 005d4c23
        ;   XREF to: 005d4f56 (CONDITIONAL_JUMP)  ; LAB_005d4f56
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4c29
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4c30
    MOV dword ptr [ESP + 0x28],EAX      ; 005d4c33
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4c37
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d4c3e
        ;   Label: LAB_005d4c3e
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d4c41
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4c45
    FLD double ptr [ESP + 0x28]         ; 005d4c4c
    FCOMP double ptr [EAX + 0x10]       ; 005d4c50
    FNSTSW AX                           ; 005d4c53
    SAHF                                ; 005d4c55
    JBE 0x005d4f8a                      ; 005d4c56
        ;   XREF to: 005d4f8a (CONDITIONAL_JUMP)  ; LAB_005d4f8a
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4c5c
    FLD double ptr [EAX + 0x10]         ; 005d4c63
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4c66
    FCOMP double ptr [EAX + 0x10]       ; 005d4c6d
    FNSTSW AX                           ; 005d4c70
    SAHF                                ; 005d4c72
    JBE 0x005d4f70                      ; 005d4c73
        ;   XREF to: 005d4f70 (CONDITIONAL_JUMP)  ; LAB_005d4f70
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4c79
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4c80
    MOV dword ptr [ESP + 0x68],EAX      ; 005d4c83
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d4c87
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d4c8e
        ;   Label: LAB_005d4c8e
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d4c91
    MOV EAX,dword ptr [ESP + 0x68]      ; 005d4c95
    MOV dword ptr [ESP],EAX             ; 005d4c99
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005d4c9c
    MOV dword ptr [ESP + 0x4],EAX       ; 005d4ca0
        ;   Label: LAB_005d4ca0
    FLD double ptr [ESP]                ; 005d4ca4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d4ca7
    XOR EBX,EBX                         ; 005d4caa
    FADD double ptr [0x00654532]        ; 005d4cac | DOUBLE_00654532
    MOV ECX,dword ptr [EAX]             ; 005d4cb2
    FSTP double ptr [ESP + 0xc0]        ; 005d4cb4
    TEST ECX,ECX                        ; 005d4cbb
    JBE 0x005d4d21                      ; 005d4cbd
        ;   XREF to: 005d4d21 (CONDITIONAL_JUMP)  ; LAB_005d4d21
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 005d4cbf
    ADD EAX,0x30                        ; 005d4cc6
    MOV dword ptr [ESP + 0x2a4],EAX     ; 005d4cc9
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 005d4cd0
    ADD EAX,0x20                        ; 005d4cd7
    MOV dword ptr [ESP + 0x2a8],EAX     ; 005d4cda
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 005d4ce1
    ADD EAX,0x10                        ; 005d4ce8
    MOV dword ptr [ESP + 0x2c4],EBX     ; 005d4ceb
    MOV dword ptr [ESP + 0x29c],EAX     ; 005d4cf2
    CMP EBX,dword ptr [ESP + 0x2b8]     ; 005d4cf9
        ;   Label: LAB_005d4cf9
    JNZ 0x005d4fa6                      ; 005d4d00
        ;   XREF to: 005d4fa6 (CONDITIONAL_JUMP)  ; LAB_005d4fa6
    MOV ESI,dword ptr [ESP + 0x2c4]     ; 005d4d06
        ;   Label: LAB_005d4d06
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d4d0d
    INC EBX                             ; 005d4d10
    ADD ESI,0x38                        ; 005d4d11
    MOV EDI,dword ptr [EAX]             ; 005d4d14
    MOV dword ptr [ESP + 0x2c4],ESI     ; 005d4d16
    CMP EBX,EDI                         ; 005d4d1d
    JC 0x005d4cf9                       ; 005d4d1f
        ;   XREF to: 005d4cf9 (CONDITIONAL_JUMP)  ; LAB_005d4cf9
    MOV ECX,dword ptr [ESP + 0x2ac]     ; 005d4d21
        ;   Label: LAB_005d4d21
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d4d28
    INC ECX                             ; 005d4d2b
    MOV ESI,dword ptr [EBX + 0x8]       ; 005d4d2c
    MOV dword ptr [ESP + 0x2ac],ECX     ; 005d4d2f
    CMP ECX,ESI                         ; 005d4d36
    JC 0x005d480e                       ; 005d4d38
        ;   XREF to: 005d480e (CONDITIONAL_JUMP)  ; LAB_005d480e
    MOV EDI,dword ptr [ESP + 0x28c]     ; 005d4d3e
        ;   Label: LAB_005d4d3e
    PUSH EDI                            ; 005d4d45
    MOV EBX,0x1                         ; 005d4d46
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d4d4b
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d4d50
    MOV EAX,EBX                         ; 005d4d53
    MOV ESP,EBP                         ; 005d4d55
    POP EBP                             ; 005d4d57
    POP EDI                             ; 005d4d58
    POP ESI                             ; 005d4d59
    POP EBX                             ; 005d4d5a
    RET                                 ; 005d4d5b
    PUSH 0x1                            ; 005d4d5c
        ;   Label: LAB_005d4d5c
    PUSH 0x3f1a36e2                     ; 005d4d5e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d4d63
    PUSH 0xeb1c432d                     ; 005d4d66
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d4d6b
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d4d6e
    PUSH ECX                            ; 005d4d71
    CALL dword ptr [EAX + 0xc8]         ; 005d4d72
    ADD ESP,0x10                        ; 005d4d78
    TEST EAX,EAX                        ; 005d4d7b
    JNZ 0x005d47c9                      ; 005d4d7d
        ;   XREF to: 005d47c9 (CONDITIONAL_JUMP)  ; LAB_005d47c9
    XOR EBX,EBX                         ; 005d4d83
    MOV EAX,EBX                         ; 005d4d85
    MOV ESP,EBP                         ; 005d4d87
    POP EBP                             ; 005d4d89
    POP EDI                             ; 005d4d8a
    POP ESI                             ; 005d4d8b
    POP EBX                             ; 005d4d8c
    RET                                 ; 005d4d8d
    PUSH 0x4                            ; 005d4d8e
        ;   Label: LAB_005d4d8e
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 005d4d90
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
    ADD ESP,0x4                         ; 005d4d95
    MOV dword ptr [ESP + 0x28c],EAX     ; 005d4d98
    JMP 0x005d47e4                      ; 005d4d9f
        ;   XREF to: 005d47e4 (UNCONDITIONAL_JUMP)  ; LAB_005d47e4
    MOV EDX,dword ptr [ESP + 0x290]     ; 005d4da4
        ;   Label: LAB_005d4da4
    PUSH EDX                            ; 005d4dab
    PUSH 0x6544fc                       ; 005d4dac | = "Deleting T-Junctions (%d deleted so far)"
    LEA EAX,[ESP + 0x150]               ; 005d4db1
    PUSH EAX                            ; 005d4db8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005d4db9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005d4dbe
    JMP 0x005d4826                      ; 005d4dc1
        ;   XREF to: 005d4826 (UNCONDITIONAL_JUMP)  ; LAB_005d4826
    MOV EAX,dword ptr [ESI]             ; 005d4dc6
        ;   Label: LAB_005d4dc6
    MOV dword ptr [ESP + 0x58],EAX      ; 005d4dc8
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d4dcc
    JMP 0x005d48d3                      ; 005d4dcf
        ;   XREF to: 005d48d3 (UNCONDITIONAL_JUMP)  ; LAB_005d48d3
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4dd4
        ;   Label: LAB_005d4dd4
    MOV EAX,dword ptr [EAX]             ; 005d4ddb
    MOV dword ptr [ESP + 0x30],EAX      ; 005d4ddd
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4de1
    JMP 0x005d491c                      ; 005d4de8
        ;   XREF to: 005d491c (UNCONDITIONAL_JUMP)  ; LAB_005d491c
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4ded
        ;   Label: LAB_005d4ded
    MOV EAX,dword ptr [EAX]             ; 005d4df4
    MOV dword ptr [ESP + 0x60],EAX      ; 005d4df6
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4dfa
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d4e01
    JMP 0x005d492f                      ; 005d4e04
        ;   XREF to: 005d492f (UNCONDITIONAL_JUMP)  ; LAB_005d492f
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e09
        ;   Label: LAB_005d4e09
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4e10
    MOV dword ptr [ESP + 0x18],EAX      ; 005d4e13
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e17
    JMP 0x005d4976                      ; 005d4e1e
        ;   XREF to: 005d4976 (UNCONDITIONAL_JUMP)  ; LAB_005d4976
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e23
        ;   Label: LAB_005d4e23
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4e2a
    MOV dword ptr [ESP + 0xd0],EAX      ; 005d4e2d
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e34
    JMP 0x005d49c9                      ; 005d4e3b
        ;   XREF to: 005d49c9 (UNCONDITIONAL_JUMP)  ; LAB_005d49c9
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4e40
        ;   Label: LAB_005d4e40
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4e47
    MOV dword ptr [ESP + 0x80],EAX      ; 005d4e4a
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4e51
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d4e58
    JMP 0x005d49e8                      ; 005d4e5b
        ;   XREF to: 005d49e8 (UNCONDITIONAL_JUMP)  ; LAB_005d49e8
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e60
        ;   Label: LAB_005d4e60
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4e67
    MOV dword ptr [ESP + 0x48],EAX      ; 005d4e6a
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e6e
    JMP 0x005d4a35                      ; 005d4e75
        ;   XREF to: 005d4a35 (UNCONDITIONAL_JUMP)  ; LAB_005d4a35
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e7a
        ;   Label: LAB_005d4e7a
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4e81
    MOV dword ptr [ESP + 0xd8],EAX      ; 005d4e84
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4e8b
    JMP 0x005d4a88                      ; 005d4e92
        ;   XREF to: 005d4a88 (UNCONDITIONAL_JUMP)  ; LAB_005d4a88
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4e97
        ;   Label: LAB_005d4e97
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4e9e
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d4ea1
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4ea8
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d4eaf
    JMP 0x005d4aa7                      ; 005d4eb2
        ;   XREF to: 005d4aa7 (UNCONDITIONAL_JUMP)  ; LAB_005d4aa7
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4eb7
        ;   Label: LAB_005d4eb7
    MOV EAX,dword ptr [EAX]             ; 005d4ebe
    MOV dword ptr [ESP + 0x40],EAX      ; 005d4ec0
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4ec4
    JMP 0x005d4af1                      ; 005d4ecb
        ;   XREF to: 005d4af1 (UNCONDITIONAL_JUMP)  ; LAB_005d4af1
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4ed0
        ;   Label: LAB_005d4ed0
    MOV EAX,dword ptr [EAX]             ; 005d4ed7
    MOV dword ptr [ESP + 0x78],EAX      ; 005d4ed9
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4edd
    JMP 0x005d4b3d                      ; 005d4ee4
        ;   XREF to: 005d4b3d (UNCONDITIONAL_JUMP)  ; LAB_005d4b3d
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4ee9
        ;   Label: LAB_005d4ee9
    MOV EAX,dword ptr [EAX]             ; 005d4ef0
    MOV dword ptr [ESP + 0x70],EAX      ; 005d4ef2
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4ef6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d4efd
    JMP 0x005d4b50                      ; 005d4f00
        ;   XREF to: 005d4b50 (UNCONDITIONAL_JUMP)  ; LAB_005d4b50
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f05
        ;   Label: LAB_005d4f05
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4f0c
    MOV dword ptr [ESP + 0x8],EAX       ; 005d4f0f
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f13
    JMP 0x005d4b94                      ; 005d4f1a
        ;   XREF to: 005d4b94 (UNCONDITIONAL_JUMP)  ; LAB_005d4b94
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f1f
        ;   Label: LAB_005d4f1f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4f26
    MOV dword ptr [ESP + 0x38],EAX      ; 005d4f29
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f2d
    JMP 0x005d4be4                      ; 005d4f34
        ;   XREF to: 005d4be4 (UNCONDITIONAL_JUMP)  ; LAB_005d4be4
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4f39
        ;   Label: LAB_005d4f39
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d4f40
    MOV dword ptr [ESP + 0x20],EAX      ; 005d4f43
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4f47
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d4f4e
    JMP 0x005d4bf7                      ; 005d4f51
        ;   XREF to: 005d4bf7 (UNCONDITIONAL_JUMP)  ; LAB_005d4bf7
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f56
        ;   Label: LAB_005d4f56
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4f5d
    MOV dword ptr [ESP + 0x28],EAX      ; 005d4f60
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f64
    JMP 0x005d4c3e                      ; 005d4f6b
        ;   XREF to: 005d4c3e (UNCONDITIONAL_JUMP)  ; LAB_005d4c3e
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f70
        ;   Label: LAB_005d4f70
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4f77
    MOV dword ptr [ESP + 0x68],EAX      ; 005d4f7a
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d4f7e
    JMP 0x005d4c8e                      ; 005d4f85
        ;   XREF to: 005d4c8e (UNCONDITIONAL_JUMP)  ; LAB_005d4c8e
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4f8a
        ;   Label: LAB_005d4f8a
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d4f91
    MOV dword ptr [ESP],EAX             ; 005d4f94
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d4f97
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d4f9e
    JMP 0x005d4ca0                      ; 005d4fa1
        ;   XREF to: 005d4ca0 (UNCONDITIONAL_JUMP)  ; LAB_005d4ca0
    CMP EBX,dword ptr [ESP + 0x2bc]     ; 005d4fa6
        ;   Label: LAB_005d4fa6
    JZ 0x005d4d06                       ; 005d4fad
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    CMP EBX,dword ptr [ESP + 0x2b4]     ; 005d4fb3
    JZ 0x005d4d06                       ; 005d4fba
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    MOV ESI,dword ptr [EBP + 0x14]      ; 005d4fc0
    MOV EDI,dword ptr [ESP + 0x2c4]     ; 005d4fc3
    MOV ESI,dword ptr [ESI + 0x4]       ; 005d4fca
    MOV ECX,0x6                         ; 005d4fcd
    ADD ESI,EDI                         ; 005d4fd2
    LEA EDI,[ESP + 0x1d4]               ; 005d4fd4
    MOVSD.REP ES:EDI,ESI                ; 005d4fdb
    FLD double ptr [ESP + 0x1d4]        ; 005d4fdd
    FCOMP double ptr [ESP + 0xc8]       ; 005d4fe4
    FNSTSW AX                           ; 005d4feb
    SAHF                                ; 005d4fed
    JC 0x005d4d06                       ; 005d4fee
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    FLD double ptr [ESP + 0x1d4]        ; 005d4ff4
    FCOMP double ptr [ESP + 0x50]       ; 005d4ffb
    FNSTSW AX                           ; 005d4fff
    SAHF                                ; 005d5001
    JA 0x005d4d06                       ; 005d5002
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    FLD double ptr [ESP + 0x1dc]        ; 005d5008
    FCOMP double ptr [ESP + 0xb8]       ; 005d500f
    FNSTSW AX                           ; 005d5016
    SAHF                                ; 005d5018
    JC 0x005d4d06                       ; 005d5019
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    FLD double ptr [ESP + 0x1dc]        ; 005d501f
    FCOMP double ptr [ESP + 0x90]       ; 005d5026
    FNSTSW AX                           ; 005d502d
    SAHF                                ; 005d502f
    JA 0x005d4d06                       ; 005d5030
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    FLD double ptr [ESP + 0x1e4]        ; 005d5036
    FCOMP double ptr [ESP + 0xb0]       ; 005d503d
    FNSTSW AX                           ; 005d5044
    SAHF                                ; 005d5046
    JC 0x005d4d06                       ; 005d5047
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    FLD double ptr [ESP + 0x1e4]        ; 005d504d
    FCOMP double ptr [ESP + 0xc0]       ; 005d5054
    FNSTSW AX                           ; 005d505b
    SAHF                                ; 005d505d
    JA 0x005d4d06                       ; 005d505e
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5064
    PUSH EAX                            ; 005d506b
    MOV EDX,dword ptr [ESP + 0x2d0]     ; 005d506c
    PUSH EDX                            ; 005d5073
    LEA EAX,[ESP + 0x1dc]               ; 005d5074
    PUSH EAX                            ; 005d507b
    CALL shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10 ; 005d507c
        ;   XREF to: 005d6c10 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d * point, CVector3d * seg_start, CVector3d * seg_end)
    ADD ESP,0xc                         ; 005d5081
    TEST EAX,EAX                        ; 005d5084
    JZ 0x005d54cd                       ; 005d5086
        ;   XREF to: 005d54cd (CONDITIONAL_JUMP)  ; LAB_005d54cd
    MOV dword ptr [ESP + 0x2a0],0x1     ; 005d508c
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d5097
    MOV EAX,dword ptr [EAX]             ; 005d509e
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005d50a0
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d50a7
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d50ae
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005d50b1
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d50b8
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d50bf
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005d50c2
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d50c9
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d50d0
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005d50d3
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d50da
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d50e1
    MOV dword ptr [ESP + 0x1cc],EAX     ; 005d50e4
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005d50eb
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d50f2
    MOV dword ptr [ESP + 0x1d0],EAX     ; 005d50f5
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d50fc
    MOV EAX,dword ptr [EAX]             ; 005d5103
    MOV dword ptr [ESP + 0x98],EAX      ; 005d5105
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d510c
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d5113
    MOV dword ptr [ESP + 0x9c],EAX      ; 005d5116
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d511d
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d5124
    MOV dword ptr [ESP + 0x10],EAX      ; 005d5127
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d512b
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d5132
    MOV dword ptr [ESP + 0x14],EAX      ; 005d5135
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5139
    MOV EAX,dword ptr [EAX]             ; 005d5140
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005d5142
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5149
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d5150
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005d5153
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d515a
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d5161
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005d5164
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d516b
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d5172
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005d5175
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d517c
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d5183
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005d5186
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d518d
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d5194
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005d5197
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d519e
    MOV EAX,dword ptr [EAX]             ; 005d51a5
    MOV dword ptr [ESP + 0xa0],EAX      ; 005d51a7
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d51ae
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d51b5
    MOV dword ptr [ESP + 0xa4],EAX      ; 005d51b8
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d51bf
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d51c6
    MOV dword ptr [ESP + 0x88],EAX      ; 005d51c9
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d51d0
    MOV EDX,0x2                         ; 005d51d7
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d51dc
    MOV dword ptr [ESP + 0x298],EDX     ; 005d51df
    MOV dword ptr [ESP + 0x8c],EAX      ; 005d51e6
        ;   Label: LAB_005d51e6
    MOV ECX,dword ptr [ESP + 0x294]     ; 005d51ed
    DEC ECX                             ; 005d51f4
    MOV dword ptr [ESP + 0x294],ECX     ; 005d51f5
    TEST ECX,ECX                        ; 005d51fc
    JLE 0x005d57ad                      ; 005d51fe
        ;   XREF to: 005d57ad (CONDITIONAL_JUMP)  ; LAB_005d57ad
    PUSH 0x0                            ; 005d5204
    LEA EAX,[ESP + 0xe4]                ; 005d5206
    PUSH EAX                            ; 005d520d
    CALL shape_superopt.cpp_CPoly_ctor_FUN_005cc620 ; 005d520e
        ;   XREF to: 005cc620 (UNCONDITIONAL_CALL)  ; CPoly * shape_superopt.cpp_CPoly_ctor_FUN_005cc620(CPoly * this_ptr, CObj * parent_obj)
    ADD ESP,0x8                         ; 005d5213
    MOV EDI,dword ptr [EBP + 0x14]      ; 005d5216
    PUSH EDI                            ; 005d5219
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 005d521a
    PUSH EAX                            ; 005d5221
    LEA EAX,[ESP + 0xe8]                ; 005d5222
    PUSH EAX                            ; 005d5229
    CALL shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0 ; 005d522a
        ;   XREF to: 005cc6a0 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly * this_ptr, CPoly * source, CObj * parent_obj)
    ADD ESP,0xc                         ; 005d522f
    FLD double ptr [ESP + 0x1a4]        ; 005d5232
    FSUB double ptr [ESP + 0x1bc]       ; 005d5239
    FMUL ST0                            ; 005d5240
    FLD double ptr [ESP + 0x1ac]        ; 005d5242
    MOV ESI,dword ptr [ESP + 0x2a0]     ; 005d5249
    MOV EDX,dword ptr [ESP + 0x2b0]     ; 005d5250
    MOV dword ptr [ESP + 0xe4],EBX      ; 005d5257
    SHL ESI,0x2                         ; 005d525e
    FSUB double ptr [ESP + 0x1c4]       ; 005d5261
    ADD ESI,EDX                         ; 005d5268
    FMUL ST0                            ; 005d526a
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d526c
    FLD double ptr [ESP + 0x1b4]        ; 005d526f
    MOV dword ptr [ESP + 0xe8],EAX      ; 005d5276
    MOV EAX,dword ptr [ESP + 0x298]     ; 005d527d
    FSUB double ptr [ESP + 0x1cc]       ; 005d5284
    SHL EAX,0x2                         ; 005d528b
    FXCH                                ; 005d528e
    FADDP ST2,ST0                       ; 005d5290
    ADD EAX,EDX                         ; 005d5292
    FMUL ST0                            ; 005d5294
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d5296
    FADDP                               ; 005d5299
    MOV dword ptr [ESP + 0xec],EAX      ; 005d529b
    FSQRT                               ; 005d52a2
    MOV dword ptr [ESI + 0x4],EBX       ; 005d52a4
    FLD double ptr [ESP + 0x1d4]        ; 005d52a7
    FSUB double ptr [ESP + 0x1bc]       ; 005d52ae
    FMUL ST0                            ; 005d52b5
    FLD double ptr [ESP + 0x1dc]        ; 005d52b7
    FSUB double ptr [ESP + 0x1c4]       ; 005d52be
    FMUL ST0                            ; 005d52c5
    FLD double ptr [ESP + 0x1e4]        ; 005d52c7
    FXCH                                ; 005d52ce
    FADDP ST2,ST0                       ; 005d52d0
    FSUB double ptr [ESP + 0x1cc]       ; 005d52d2
    FMUL ST0                            ; 005d52d9
    FADDP                               ; 005d52db
    FSQRT                               ; 005d52dd
    LEA EDI,[ESP + 0x21c]               ; 005d52df
    FLD double ptr [ESP + 0x88]         ; 005d52e6
    FLD double ptr [ESP + 0x98]         ; 005d52ed
    FLD double ptr [ESP + 0xa0]         ; 005d52f4
    FSUB ST0,ST1                        ; 005d52fb
    FXCH ST2                            ; 005d52fd
    FLD double ptr [ESP + 0x10]         ; 005d52ff
    FXCH                                ; 005d5303
    FSUB ST0,ST1                        ; 005d5305
    FXCH ST3                            ; 005d5307
    FSTP double ptr [ESP + 0x1ec]       ; 005d5309
    LEA ESI,[ESP + 0x1ec]               ; 005d5310
    FXCH ST2                            ; 005d5317
    FSTP double ptr [ESP + 0x1f4]       ; 005d5319
    MOVSD ES:EDI,ESI                    ; 005d5320
    MOVSD ES:EDI,ESI                    ; 005d5321
    MOVSD ES:EDI,ESI                    ; 005d5322
    MOVSD ES:EDI,ESI                    ; 005d5323
    FLD double ptr [ESP + 0x21c]        ; 005d5324
    FXCH ST4                            ; 005d532b
    FDIVP ST3,ST0                       ; 005d532d
    FXCH ST3                            ; 005d532f
    FMUL ST2                            ; 005d5331
    FLD double ptr [ESP + 0x224]        ; 005d5333
    FMULP ST3                           ; 005d533a
    LEA EDI,[ESP + 0x20c]               ; 005d533c
    LEA ESI,[ESP + 0x23c]               ; 005d5343
    FSTP double ptr [ESP + 0x23c]       ; 005d534a
    FXCH                                ; 005d5351
    FSTP double ptr [ESP + 0x244]       ; 005d5353
    MOVSD ES:EDI,ESI                    ; 005d535a
    MOVSD ES:EDI,ESI                    ; 005d535b
    MOVSD ES:EDI,ESI                    ; 005d535c
    MOVSD ES:EDI,ESI                    ; 005d535d
    LEA EDI,[ESP + 0x1fc]               ; 005d535e
    LEA ESI,[ESP + 0x22c]               ; 005d5365
    FXCH                                ; 005d536c
    FADD double ptr [ESP + 0x20c]       ; 005d536e
    FXCH                                ; 005d5375
    FADD double ptr [ESP + 0x214]       ; 005d5377
    FXCH                                ; 005d537e
    FSTP double ptr [ESP + 0x22c]       ; 005d5380
    FSTP double ptr [ESP + 0x234]       ; 005d5387
    MOVSD ES:EDI,ESI                    ; 005d538e
    MOVSD ES:EDI,ESI                    ; 005d538f
    MOVSD ES:EDI,ESI                    ; 005d5390
    MOVSD ES:EDI,ESI                    ; 005d5391
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 005d5392
    MOV EBX,dword ptr [ESP + 0x2a0]     ; 005d5399
    MOV dword ptr [ESP + 0xf0],EAX      ; 005d53a0
    MOV EAX,dword ptr [ESP + 0x200]     ; 005d53a7
    SHL EBX,0x4                         ; 005d53ae
    MOV dword ptr [ESP + 0xf4],EAX      ; 005d53b1
    MOV EAX,dword ptr [ESP + 0x204]     ; 005d53b8
    LEA ESI,[EDX + 0x10]                ; 005d53bf
    MOV dword ptr [ESP + 0xf8],EAX      ; 005d53c2
    MOV EAX,dword ptr [ESP + 0x208]     ; 005d53c9
    ADD EBX,ESI                         ; 005d53d0
    MOV dword ptr [ESP + 0xfc],EAX      ; 005d53d2
    MOV EAX,dword ptr [EBX]             ; 005d53d9
    MOV dword ptr [ESP + 0x100],EAX     ; 005d53db
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d53e2
    MOV dword ptr [ESP + 0x104],EAX     ; 005d53e5
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d53ec
    MOV dword ptr [ESP + 0x108],EAX     ; 005d53ef
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d53f6
    MOV dword ptr [ESP + 0x10c],EAX     ; 005d53f9
    MOV EAX,dword ptr [ESP + 0x298]     ; 005d5400
    SHL EAX,0x4                         ; 005d5407
    ADD ESI,EAX                         ; 005d540a
    MOV EAX,dword ptr [ESI]             ; 005d540c
    MOV dword ptr [ESP + 0x110],EAX     ; 005d540e
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d5415
    MOV dword ptr [ESP + 0x114],EAX     ; 005d5418
    MOV EAX,dword ptr [ESI + 0x8]       ; 005d541f
    MOV dword ptr [ESP + 0x118],EAX     ; 005d5422
    MOV EAX,dword ptr [ESI + 0xc]       ; 005d5429
    MOV dword ptr [ESP + 0x11c],EAX     ; 005d542c
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 005d5433
    MOV dword ptr [EBX],EAX             ; 005d543a
    MOV EAX,dword ptr [ESP + 0x200]     ; 005d543c
    MOV dword ptr [EBX + 0x4],EAX       ; 005d5443
    MOV EAX,dword ptr [ESP + 0x204]     ; 005d5446
    MOV dword ptr [EBX + 0x8],EAX       ; 005d544d
    PUSH 0x1                            ; 005d5450
    MOV EAX,dword ptr [ESP + 0x20c]     ; 005d5452
    MOV ESI,dword ptr [EBP + 0x14]      ; 005d5459
    MOV dword ptr [EBX + 0xc],EAX       ; 005d545c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d545f
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d5462
    PUSH ESI                            ; 005d5465
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d5466
    MOV EBX,dword ptr [EBX + 0x8]       ; 005d5469
    CALL dword ptr [EAX + 0x10]         ; 005d546c
    ADD ESP,0x8                         ; 005d546f
    TEST EAX,EAX                        ; 005d5472
    JZ 0x005d57c8                       ; 005d5474
        ;   XREF to: 005d57c8 (CONDITIONAL_JUMP)  ; LAB_005d57c8
    IMUL EAX,EBX,0x68                   ; 005d547a
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d547d
    MOV EBX,dword ptr [ESI + 0xc]       ; 005d5480
    PUSH EDX                            ; 005d5483
    ADD EAX,EBX                         ; 005d5484
    LEA EBX,[ESP + 0xe4]                ; 005d5486
    PUSH EBX                            ; 005d548d
    MOV ESI,dword ptr [EAX + 0x64]      ; 005d548e
    PUSH EAX                            ; 005d5491
    CALL dword ptr [ESI + 0x4]          ; 005d5492
    ADD ESP,0xc                         ; 005d5495
    LEA EAX,[ESP + 0xe0]                ; 005d5498
    PUSH 0x0                            ; 005d549f
    MOV ECX,dword ptr [ESP + 0x2b0]     ; 005d54a1
    MOV EBX,dword ptr [ESP + 0x294]     ; 005d54a8
    PUSH EAX                            ; 005d54af
    DEC ECX                             ; 005d54b0
    INC EBX                             ; 005d54b1
    MOV dword ptr [ESP + 0x2b4],ECX     ; 005d54b2
    MOV dword ptr [ESP + 0x298],EBX     ; 005d54b9
    CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660 ; 005d54c0
        ;   XREF to: 005cc660 (UNCONDITIONAL_CALL)  ; CPoly * shape_superopt.cpp_CPoly_dtor_FUN_005cc660(CPoly * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005d54c5
    JMP 0x005d4d21                      ; 005d54c8
        ;   XREF to: 005d4d21 (UNCONDITIONAL_JUMP)  ; LAB_005d4d21
    MOV ECX,dword ptr [ESP + 0x2c0]     ; 005d54cd
        ;   Label: LAB_005d54cd
    PUSH ECX                            ; 005d54d4
    MOV ESI,dword ptr [ESP + 0x2cc]     ; 005d54d5
    PUSH ESI                            ; 005d54dc
    LEA EAX,[ESP + 0x1dc]               ; 005d54dd
    PUSH EAX                            ; 005d54e4
    CALL shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10 ; 005d54e5
        ;   XREF to: 005d6c10 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d * point, CVector3d * seg_start, CVector3d * seg_end)
    ADD ESP,0xc                         ; 005d54ea
    TEST EAX,EAX                        ; 005d54ed
    JZ 0x005d5652                       ; 005d54ef
        ;   XREF to: 005d5652 (CONDITIONAL_JUMP)  ; LAB_005d5652
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d54f5
    MOV EAX,dword ptr [EAX]             ; 005d54fc
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005d54fe
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5505
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d550c
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005d550f
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5516
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d551d
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005d5520
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5527
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d552e
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005d5531
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5538
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d553f
    MOV dword ptr [ESP + 0x1cc],EAX     ; 005d5542
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005d5549
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d5550
    MOV dword ptr [ESP + 0x1d0],EAX     ; 005d5553
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d555a
    MOV EAX,dword ptr [EAX]             ; 005d5561
    MOV dword ptr [ESP + 0x98],EAX      ; 005d5563
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d556a
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d5571
    MOV dword ptr [ESP + 0x9c],EAX      ; 005d5574
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d557b
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d5582
    MOV dword ptr [ESP + 0x10],EAX      ; 005d5585
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005d5589
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d5590
    MOV dword ptr [ESP + 0x14],EAX      ; 005d5593
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d5597
    MOV EAX,dword ptr [EAX]             ; 005d559e
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005d55a0
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d55a7
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d55ae
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005d55b1
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d55b8
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d55bf
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005d55c2
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d55c9
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d55d0
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005d55d3
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d55da
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d55e1
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005d55e4
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d55eb
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d55f2
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005d55f5
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d55fc
    MOV EAX,dword ptr [EAX]             ; 005d5603
    MOV dword ptr [ESP + 0xa0],EAX      ; 005d5605
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d560c
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d5613
    MOV dword ptr [ESP + 0xa4],EAX      ; 005d5616
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d561d
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d5624
    XOR EDI,EDI                         ; 005d5627
    MOV dword ptr [ESP + 0x88],EAX      ; 005d5629
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d5630
    MOV ESI,0x2                         ; 005d5637
    MOV dword ptr [ESP + 0x298],EDI     ; 005d563c
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d5643
    MOV dword ptr [ESP + 0x2a0],ESI     ; 005d5646
    JMP 0x005d51e6                      ; 005d564d
        ;   XREF to: 005d51e6 (UNCONDITIONAL_JUMP)  ; LAB_005d51e6
    MOV EDI,dword ptr [ESP + 0x2cc]     ; 005d5652
        ;   Label: LAB_005d5652
    PUSH EDI                            ; 005d5659
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 005d565a
    PUSH EAX                            ; 005d5661
    LEA EAX,[ESP + 0x1dc]               ; 005d5662
    PUSH EAX                            ; 005d5669
    CALL shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10 ; 005d566a
        ;   XREF to: 005d6c10 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d * point, CVector3d * seg_start, CVector3d * seg_end)
    ADD ESP,0xc                         ; 005d566f
    TEST EAX,EAX                        ; 005d5672
    JZ 0x005d4d06                       ; 005d5674
        ;   XREF to: 005d4d06 (CONDITIONAL_JUMP)  ; LAB_005d4d06
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d567a
    MOV EAX,dword ptr [EAX]             ; 005d5681
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005d5683
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d568a
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d5691
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005d5694
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d569b
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d56a2
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005d56a5
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d56ac
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d56b3
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005d56b6
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d56bd
    MOV EAX,dword ptr [EAX + 0x10]      ; 005d56c4
    MOV dword ptr [ESP + 0x1cc],EAX     ; 005d56c7
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005d56ce
    MOV EAX,dword ptr [EAX + 0x14]      ; 005d56d5
    MOV dword ptr [ESP + 0x1d0],EAX     ; 005d56d8
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d56df
    MOV EAX,dword ptr [EAX]             ; 005d56e6
    MOV dword ptr [ESP + 0x98],EAX      ; 005d56e8
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d56ef
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d56f6
    MOV dword ptr [ESP + 0x9c],EAX      ; 005d56f9
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d5700
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d5707
    MOV dword ptr [ESP + 0x10],EAX      ; 005d570a
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005d570e
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d5715
    MOV dword ptr [ESP + 0x14],EAX      ; 005d5718
    MOV EAX,dword ptr [EDI]             ; 005d571c
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005d571e
    MOV EAX,dword ptr [EDI + 0x4]       ; 005d5725
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005d5728
    MOV EAX,dword ptr [EDI + 0x8]       ; 005d572f
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005d5732
    MOV EAX,dword ptr [EDI + 0xc]       ; 005d5739
    MOV dword ptr [ESP + 0x1b0],EAX     ; 005d573c
    MOV EAX,dword ptr [EDI + 0x10]      ; 005d5743
    MOV dword ptr [ESP + 0x1b4],EAX     ; 005d5746
    MOV EAX,dword ptr [EDI + 0x14]      ; 005d574d
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005d5750
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d5757
    MOV EAX,dword ptr [EAX]             ; 005d575e
    MOV dword ptr [ESP + 0xa0],EAX      ; 005d5760
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d5767
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d576e
    MOV dword ptr [ESP + 0xa4],EAX      ; 005d5771
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d5778
    MOV EAX,dword ptr [EAX + 0x8]       ; 005d577f
    MOV ECX,0x1                         ; 005d5782
    MOV dword ptr [ESP + 0x88],EAX      ; 005d5787
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005d578e
    XOR EDX,EDX                         ; 005d5795
    MOV dword ptr [ESP + 0x298],ECX     ; 005d5797
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d579e
    MOV dword ptr [ESP + 0x2a0],EDX     ; 005d57a1
    JMP 0x005d51e6                      ; 005d57a8
        ;   XREF to: 005d51e6 (UNCONDITIONAL_JUMP)  ; LAB_005d51e6
    MOV ESI,dword ptr [ESP + 0x28c]     ; 005d57ad
        ;   Label: LAB_005d57ad
    PUSH ESI                            ; 005d57b4
    XOR EBX,EBX                         ; 005d57b5
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d57b7
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d57bc
    MOV EAX,EBX                         ; 005d57bf
    MOV ESP,EBP                         ; 005d57c1
    POP EBP                             ; 005d57c3
    POP EDI                             ; 005d57c4
    POP ESI                             ; 005d57c5
    POP EBX                             ; 005d57c6
    RET                                 ; 005d57c7
    MOV EDI,dword ptr [ESP + 0x28c]     ; 005d57c8
        ;   Label: LAB_005d57c8
    PUSH EDI                            ; 005d57cf
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d57d0
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d57d5
    XOR EBX,EBX                         ; 005d57d8
    PUSH EBX                            ; 005d57da
    LEA EAX,[ESP + 0xe4]                ; 005d57db
    PUSH EAX                            ; 005d57e2
    CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660 ; 005d57e3
        ;   XREF to: 005cc660 (UNCONDITIONAL_CALL)  ; CPoly * shape_superopt.cpp_CPoly_dtor_FUN_005cc660(CPoly * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005d57e8
    MOV EAX,EBX                         ; 005d57eb
    MOV ESP,EBP                         ; 005d57ed
    POP EBP                             ; 005d57ef
    POP EDI                             ; 005d57f0
    POP ESI                             ; 005d57f1
    POP EBX                             ; 005d57f2
    RET                                 ; 005d57f3

