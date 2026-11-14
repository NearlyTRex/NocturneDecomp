; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_activate_FUN_004b16d0(CExplosion *this_ptr,CVector3f *position,float scale,float gore_multiplier)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   scale
; float            Stack[0x10]:4   gore_multiplier
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 at 004b6c85
;
; Referenced Globals:
;   undefined4 DAT_005df358
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_fire.cpp_CFireEffect_createRock_FUN_004b5eb0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b16d0
        ;   Label: core_fire.cpp_CExplosion_activate_FUN_004b16d0
    PUSH ESI                            ; 004b16d1
    PUSH EDI                            ; 004b16d2
    PUSH EBP                            ; 004b16d3
    SUB ESP,0x40                        ; 004b16d4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004b16d7
    MOV EAX,dword ptr [ESP + 0x58]      ; 004b16db
    CMP EBP,EAX                         ; 004b16df
    JZ 0x004b16f4                       ; 004b16e1
        ;   XREF to: 004b16f4 (CONDITIONAL_JUMP)  ; LAB_004b16f4
    MOV EDX,dword ptr [EAX]             ; 004b16e3
    MOV dword ptr [EBP],EDX             ; 004b16e5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b16e8
    MOV dword ptr [EBP + 0x4],EDX       ; 004b16eb
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b16ee
    MOV dword ptr [EBP + 0x8],EDX       ; 004b16f1
    PUSH 0x40000000                     ; 004b16f4
        ;   Label: LAB_004b16f4
    PUSH 0x0                            ; 004b16f9
    MOV EAX,dword ptr [ESP + 0x64]      ; 004b16fb
    PUSH 0x0                            ; 004b16ff
    MOV EDX,dword ptr [0x00622c18]      ; 004b1701 | g_CDemonSetPtr
    PUSH 0x43480000                     ; 004b1707
    MOV dword ptr [EBP + 0xc],0x3f800000 ; 004b170c
    PUSH EDX                            ; 004b1713 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x10],EAX      ; 004b1714
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0 ; 004b1717
        ;   XREF to: 00555ab0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004b171c
    PUSH 0x3f000000                     ; 004b171f
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004b1724
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004b1729
    MOV dword ptr [EBP + 0x18],EAX      ; 004b172c
    MOV EAX,dword ptr [ESP + 0x60]      ; 004b172f
    XOR EBX,EBX                         ; 004b1733
    MOV dword ptr [EBP + 0x14],EAX      ; 004b1735
    PUSH 0x3fc90fdb                     ; 004b1738
        ;   Label: LAB_004b1738
    PUSH 0x3f490fdb                     ; 004b173d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b1742
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 004b1747
    FLD float ptr [ESP + 0x44]          ; 004b174b
    ADD ESP,0x8                         ; 004b174f
    PUSH 0x40c90fdb                     ; 004b1752
    PUSH 0x0                            ; 004b1757
    FSTP float ptr [ESP + 0x38]         ; 004b1759
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b175d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 004b1762
    FLD float ptr [ESP + 0x44]          ; 004b1766
    ADD ESP,0x8                         ; 004b176a
    FLD ST0                             ; 004b176d
    FCOS                                ; 004b176f
    FLD float ptr [ESP + 0x30]          ; 004b1771
    FLD ST0                             ; 004b1775
    FCOS                                ; 004b1777
    FXCH ST3                            ; 004b1779
    FSIN                                ; 004b177b
    FXCH                                ; 004b177d
    FSIN                                ; 004b177f
    MOV EDX,EBX                         ; 004b1781
    MOV ECX,0x5                         ; 004b1783
    SAR EDX,0x1f                        ; 004b1788
    MOV EAX,EBX                         ; 004b178b
    IDIV ECX                            ; 004b178d
    IMUL EAX,EDX,0x17c                  ; 004b178f
    FXCH ST2                            ; 004b1795
    FMUL float ptr [0x005df358]         ; 004b1797 | DAT_005df358
    FXCH                                ; 004b179d
    FMUL float ptr [0x005df358]         ; 004b179f | DAT_005df358
    FXCH ST2                            ; 004b17a5
    FMUL float ptr [0x005df358]         ; 004b17a7 | DAT_005df358
    FXCH                                ; 004b17ad
    FMUL ST3                            ; 004b17af
    FXCH ST2                            ; 004b17b1
    FMULP ST3                           ; 004b17b3
    LEA EDI,[ESP + 0xc]                 ; 004b17b5
    MOV ESI,EBP                         ; 004b17b9
    FLD1                                ; 004b17bb
    FXCH                                ; 004b17bd
    FSTP float ptr [ESP + 0x4]          ; 004b17bf
    FXCH                                ; 004b17c3
    FSTP float ptr [ESP]                ; 004b17c5
    FXCH                                ; 004b17c8
    FSTP float ptr [ESP + 0x8]          ; 004b17ca
    MOVSD ES:EDI,ESI                    ; 004b17ce
    MOVSD ES:EDI,ESI                    ; 004b17cf
    MOVSD ES:EDI,ESI                    ; 004b17d0
    ADD EAX,0x1c57e1c                   ; 004b17d1
    FADD float ptr [ESP + 0x10]         ; 004b17d6
    PUSH EAX                            ; 004b17da
    FSTP float ptr [ESP + 0x14]         ; 004b17db
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004b17df
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b17e4
    PUSH EAX                            ; 004b17e7
    LEA EAX,[ESP + 0x4]                 ; 004b17e8
    PUSH EAX                            ; 004b17ec
    LEA EAX,[ESP + 0x14]                ; 004b17ed
    PUSH EAX                            ; 004b17f1
    MOV ECX,dword ptr [0x0061c010]      ; 004b17f2 | DAT_0061c010
    PUSH ECX                            ; 004b17f8
    INC EBX                             ; 004b17f9
    CALL core_fire.cpp_CFireEffect_createRock_FUN_004b5eb0 ; 004b17fa
        ;   XREF to: 004b5eb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRock_FUN_004b5eb0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 004b17ff
    CMP EBX,0xa                         ; 004b1802
    JL 0x004b1738                       ; 004b1805
        ;   XREF to: 004b1738 (CONDITIONAL_JUMP)  ; LAB_004b1738
    ADD ESP,0x40                        ; 004b180b
    POP EBP                             ; 004b180e
    POP EDI                             ; 004b180f
    POP ESI                             ; 004b1810
    POP EBX                             ; 004b1811
    RET                                 ; 004b1812

