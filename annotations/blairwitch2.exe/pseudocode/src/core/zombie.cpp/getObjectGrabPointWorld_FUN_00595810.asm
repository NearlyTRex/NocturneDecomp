; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_getObjectGrabPointWorld_FUN_00595810(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eee1a
;   undefined4 DAT_005eee22
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d340
;   core_actor.cpp_FUN_00408d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595810
        ;   Label: core_zombie.cpp_getObjectGrabPointWorld_FUN_00595810
    PUSH EDI                            ; 00595811
    PUSH EBP                            ; 00595812
    MOV EBP,ESP                         ; 00595813
    SUB ESP,0x78                        ; 00595815
    AND ESP,0xfffffff8                  ; 00595818
    MOV EBX,ESI                         ; 0059581b
    MOV EDX,dword ptr [EBP + 0x10]      ; 0059581d
    MOV EAX,dword ptr [EBP + 0x10]      ; 00595820
    PUSH EDX                            ; 00595823
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00595824
    LEA ESI,[ESP + 0x4]                 ; 0059582a
    LEA EDI,[ESP + 0x1c]                ; 0059582e
    CALL dword ptr [EAX + 0x24]         ; 00595832
    MOV ECX,0x6                         ; 00595835
    ADD ESP,0x4                         ; 0059583a
    LEA EAX,[ESP + 0x60]                ; 0059583d
    MOV ESI,ESP                         ; 00595841
    PUSH EAX                            ; 00595843
    MOVSD.REP ES:EDI,ESI                ; 00595844
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 00595846
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x70]                ; 0059584b
    ADD ESP,0x4                         ; 0059584f
    LEA ESI,[ESP + 0x60]                ; 00595852
    FLD float ptr [ESP + 0x18]          ; 00595856
    FLD float ptr [ESP + 0x1c]          ; 0059585a
    FLD float ptr [ESP + 0x20]          ; 0059585e
    FXCH ST2                            ; 00595862
    FADD float ptr [ESP + 0x24]         ; 00595864
    FXCH                                ; 00595868
    FADD float ptr [ESP + 0x28]         ; 0059586a
    FXCH ST2                            ; 0059586e
    FADD float ptr [ESP + 0x2c]         ; 00595870
    FXCH                                ; 00595874
    FSTP float ptr [ESP + 0x60]         ; 00595876
    FXCH                                ; 0059587a
    FSTP float ptr [ESP + 0x64]         ; 0059587c
    FSTP float ptr [ESP + 0x68]         ; 00595880
    MOVSD ES:EDI,ESI                    ; 00595884
    MOVSD ES:EDI,ESI                    ; 00595885
    MOVSD ES:EDI,ESI                    ; 00595886
    LEA ESI,[ESP + 0x30]                ; 00595887
    PUSH ESI                            ; 0059588b
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 0059588c
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00595891
    FLD float ptr [0x005eee1a]          ; 00595894 | DAT_005eee1a
    FLD float ptr [ESP + 0x6c]          ; 0059589a
    FMUL ST1                            ; 0059589e
    FLD float ptr [ESP + 0x70]          ; 005958a0
    FMUL ST2                            ; 005958a4
    FLD float ptr [ESP + 0x74]          ; 005958a6
    FMULP ST3                           ; 005958aa
    LEA EDI,[ESP + 0x3c]                ; 005958ac
    LEA ESI,[ESP + 0x30]                ; 005958b0
    FLD float ptr [ESP + 0x20]          ; 005958b4
    FXCH ST2                            ; 005958b8
    FSTP float ptr [ESP + 0x30]         ; 005958ba
    FSTP float ptr [ESP + 0x34]         ; 005958be
    FXCH                                ; 005958c2
    FSTP float ptr [ESP + 0x38]         ; 005958c4
    MOVSD ES:EDI,ESI                    ; 005958c8
    MOVSD ES:EDI,ESI                    ; 005958c9
    MOVSD ES:EDI,ESI                    ; 005958ca
    FADD double ptr [0x005eee22]        ; 005958cb | DAT_005eee22
    LEA EDI,[ESP + 0x48]                ; 005958d1
    LEA ESI,[ESP + 0x3c]                ; 005958d5
    FSTP float ptr [ESP + 0x44]         ; 005958d9
    MOVSD ES:EDI,ESI                    ; 005958dd
    MOVSD ES:EDI,ESI                    ; 005958de
    MOVSD ES:EDI,ESI                    ; 005958df
    LEA ESI,[ESP + 0x48]                ; 005958e0
    PUSH ESI                            ; 005958e4
    MOV ECX,dword ptr [EBP + 0x10]      ; 005958e5
    PUSH ECX                            ; 005958e8
    LEA ESI,[ESP + 0x5c]                ; 005958e9
    MOV EDI,EBX                         ; 005958ed
    CALL core_actor.cpp_FUN_00408d70    ; 005958ef
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x5c]                ; 005958f4
    ADD ESP,0x8                         ; 005958f8
    MOVSD ES:EDI,ESI                    ; 005958fb
    MOVSD ES:EDI,ESI                    ; 005958fc
    MOVSD ES:EDI,ESI                    ; 005958fd
    MOV EAX,EBX                         ; 005958fe
    MOV ESP,EBP                         ; 00595900
    POP EBP                             ; 00595902
    POP EDI                             ; 00595903
    POP EBX                             ; 00595904
    RET                                 ; 00595905

