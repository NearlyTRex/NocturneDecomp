; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049c730(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_FUN_004a36e0 at 004a3708
;
; Referenced Globals:
;   undefined4 DAT_005c068c
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040cf40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_fire.cpp_FUN_004a28e0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c730
        ;   Label: core_fire.cpp_FUN_0049c730
    PUSH EBP                            ; 0049c731
    SUB ESP,0x40                        ; 0049c732
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0049c735
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049c739
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0049c73d
    CMP EBP,EAX                         ; 0049c741
    JZ 0x0049c756                       ; 0049c743
        ;   XREF to: 0049c756 (CONDITIONAL_JUMP)  ; LAB_0049c756
    MOV EDX,dword ptr [EAX]             ; 0049c745
    MOV dword ptr [EBP],EDX             ; 0049c747
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049c74a
    MOV dword ptr [EBP + 0x4],EDX       ; 0049c74d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0049c750
    MOV dword ptr [EBP + 0x8],EDX       ; 0049c753
    PUSH 0x40000000                     ; 0049c756
        ;   Label: LAB_0049c756
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049c75b
    PUSH 0x0                            ; 0049c75f
    MOV EDX,dword ptr [0x00603b28]      ; 0049c761 | g_CDemonSetPtr
    PUSH 0x0                            ; 0049c767
    MOV dword ptr [EBP + 0xc],0x3f800000 ; 0049c769
    PUSH 0x43480000                     ; 0049c770
    MOV dword ptr [EBP + 0x1c],EBX      ; 0049c775
    PUSH EDX                            ; 0049c778 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0x10],EAX      ; 0049c779
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440 ; 0049c77c
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 0049c781
    PUSH 0x3f000000                     ; 0049c784
    CALL core_actor.cpp_FUN_0040cf40    ; 0049c789
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0049c78e
    MOV dword ptr [EBP + 0x18],EAX      ; 0049c791
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049c794
    MOV dword ptr [EBP + 0x14],EAX      ; 0049c798
    TEST EBX,EBX                        ; 0049c79b
    JNZ 0x0049c87c                      ; 0049c79d
        ;   XREF to: 0049c87c (CONDITIONAL_JUMP)  ; LAB_0049c87c
    PUSH EDI                            ; 0049c7a3
    PUSH ESI                            ; 0049c7a4
    PUSH 0x3fc90fdb                     ; 0049c7a5
        ;   Label: LAB_0049c7a5
    PUSH 0x3f490fdb                     ; 0049c7aa
    CALL core_actor.cpp_FUN_0040ce40    ; 0049c7af
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049c7b4
    FLD float ptr [ESP + 0x4c]          ; 0049c7b8
    ADD ESP,0x8                         ; 0049c7bc
    PUSH 0x40c90fdb                     ; 0049c7bf
    PUSH 0x0                            ; 0049c7c4
    FSTP float ptr [ESP + 0x40]         ; 0049c7c6
    CALL core_actor.cpp_FUN_0040ce40    ; 0049c7ca
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049c7cf
    FLD float ptr [ESP + 0x4c]          ; 0049c7d3
    ADD ESP,0x8                         ; 0049c7d7
    FLD ST0                             ; 0049c7da
    FCOS                                ; 0049c7dc
    FLD float ptr [ESP + 0x38]          ; 0049c7de
    FLD ST0                             ; 0049c7e2
    FCOS                                ; 0049c7e4
    FXCH ST3                            ; 0049c7e6
    FSIN                                ; 0049c7e8
    FXCH                                ; 0049c7ea
    FSIN                                ; 0049c7ec
    MOV EDX,EBX                         ; 0049c7ee
    MOV ECX,0x5                         ; 0049c7f0
    SAR EDX,0x1f                        ; 0049c7f5
    MOV EAX,EBX                         ; 0049c7f8
    IDIV ECX                            ; 0049c7fa
    IMUL EDX,EDX,0x17c                  ; 0049c7fc
    FXCH ST2                            ; 0049c802
    FMUL float ptr [0x005c068c]         ; 0049c804 | DAT_005c068c
    FXCH                                ; 0049c80a
    FMUL float ptr [0x005c068c]         ; 0049c80c | DAT_005c068c
    FXCH ST2                            ; 0049c812
    FMUL float ptr [0x005c068c]         ; 0049c814 | DAT_005c068c
    FXCH                                ; 0049c81a
    FMUL ST3                            ; 0049c81c
    FXCH ST2                            ; 0049c81e
    FMULP ST3                           ; 0049c820
    LEA EDI,[ESP + 0x8]                 ; 0049c822
    MOV ESI,EBP                         ; 0049c826
    FLD1                                ; 0049c828
    FXCH                                ; 0049c82a
    FSTP float ptr [ESP + 0x18]         ; 0049c82c
    FXCH                                ; 0049c830
    FSTP float ptr [ESP + 0x14]         ; 0049c832
    FXCH                                ; 0049c836
    FSTP float ptr [ESP + 0x1c]         ; 0049c838
    MOVSD ES:EDI,ESI                    ; 0049c83c
    MOVSD ES:EDI,ESI                    ; 0049c83d
    MOVSD ES:EDI,ESI                    ; 0049c83e
    ADD EDX,0x1c743fc                   ; 0049c83f
    FADD float ptr [ESP + 0xc]          ; 0049c845
    PUSH EDX                            ; 0049c849
    FSTP float ptr [ESP + 0x10]         ; 0049c84a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0049c84e
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049c853
    PUSH EAX                            ; 0049c856
    LEA EAX,[ESP + 0x18]                ; 0049c857
    PUSH EAX                            ; 0049c85b
    LEA EAX,[ESP + 0x10]                ; 0049c85c
    PUSH EAX                            ; 0049c860
    MOV ECX,dword ptr [0x005fc5a0]      ; 0049c861 | DAT_005fc5a0
    PUSH ECX                            ; 0049c867
    INC EBX                             ; 0049c868
    CALL core_fire.cpp_FUN_004a28e0     ; 0049c869
        ;   XREF to: 004a28e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004a28e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, CKeyFramedModel * model_ptr)
    ADD ESP,0x10                        ; 0049c86e
    CMP EBX,0xa                         ; 0049c871
    JL 0x0049c7a5                       ; 0049c874
        ;   XREF to: 0049c7a5 (CONDITIONAL_JUMP)  ; LAB_0049c7a5
    POP ESI                             ; 0049c87a
    POP EDI                             ; 0049c87b
    ADD ESP,0x40                        ; 0049c87c
        ;   Label: LAB_0049c87c
    POP EBP                             ; 0049c87f
    POP EBX                             ; 0049c880
    RET                                 ; 0049c881

