; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0(CDemonActor * this_ptr, CVector3f * u1, float offset)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   u1
; float            Stack[0xc]:4   offset
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   float FLOAT_006142bc = 10000
;   double DOUBLE_006142c0 = -1
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032613ac
;   undefined4 DAT_032758e8
;   undefined4 g_CDemonCameraInstance.base.position.y
;   undefined4 g_CDemonCameraInstance.base.position.z
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c8f0
        ;   Label: core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0
    SUB ESP,0x30                        ; 0040c8f1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0040c8f4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0040c8f8
    PUSH EDX                            ; 0040c8fc
    LEA EAX,[ESP + 0x4]                 ; 0040c8fd
    PUSH EAX                            ; 0040c901
    PUSH EBX                            ; 0040c902
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0040c903 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0040c908
    MOV EAX,[0x032758e8]                ; 0040c90b | DAT_032758e8
    FLD float ptr [ESP]                 ; 0040c910
    MOV dword ptr [ESP + 0xc],EAX       ; 0040c913
    MOV EAX,0x32758e8                   ; 0040c917 | DAT_032758e8
    FSUB float ptr [ESP + 0xc]          ; 0040c91c
    FMUL ST0                            ; 0040c920
    MOV EAX,dword ptr [EAX + 0x4]       ; 0040c922 | g_CDemonCameraInstance.base.position.y
    FLD float ptr [ESP + 0x4]           ; 0040c925
    MOV dword ptr [ESP + 0x10],EAX      ; 0040c929
    MOV EAX,0x32758e8                   ; 0040c92d | DAT_032758e8
    FSUB float ptr [ESP + 0x10]         ; 0040c932
    FMUL ST0                            ; 0040c936
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040c938 | g_CDemonCameraInstance.base.position.z
    FLD float ptr [ESP + 0x8]           ; 0040c93b
    MOV dword ptr [ESP + 0x14],EAX      ; 0040c93f
    FXCH                                ; 0040c943
    FADDP ST2,ST0                       ; 0040c945
    FSUB float ptr [ESP + 0x14]         ; 0040c947
    FMUL ST0                            ; 0040c94b
    FADDP                               ; 0040c94d
    FCOMP float ptr [0x006142bc]        ; 0040c94f | float FLOAT_006142bc
    FNSTSW AX                           ; 0040c955
    SAHF                                ; 0040c957
    JBE 0x0040c961                      ; 0040c958 | LAB_0040c961
        ;   XREF to: 0040c961 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0040c95a
    ADD ESP,0x30                        ; 0040c95c
    POP EBX                             ; 0040c95f
    RET                                 ; 0040c960
    PUSH EDI                            ; 0040c961
        ;   Label: LAB_0040c961
    PUSH ESI                            ; 0040c962
    PUSH EBX                            ; 0040c963
    MOV ECX,dword ptr [0x006810c8]      ; 0040c964 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 0040c96a | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0040c96b | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c970
    LEA EAX,[ESP + 0x8]                 ; 0040c973
    PUSH 0x0                            ; 0040c977
    PUSH EAX                            ; 0040c979
    MOV ESI,dword ptr [0x006810c8]      ; 0040c97a | CDemonSet * g_CDemonSetPtr
    PUSH ESI                            ; 0040c980 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 0040c981 | float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x40],EAX      ; 0040c986
    FLD float ptr [ESP + 0x40]          ; 0040c98a
    ADD ESP,0xc                         ; 0040c98e
    LEA EDX,[EBX + 0x20]                ; 0040c991
    PUSH 0x0                            ; 0040c994
    PUSH EDX                            ; 0040c996
    MOV EAX,[0x006810c8]                ; 0040c997 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 0040c99c | CDemonSet g_CDemonSetInstance
    FSTP float ptr [ESP + 0x2c]         ; 0040c99d
    MOV ESI,dword ptr [EAX + 0x14d134]  ; 0040c9a1 | DAT_032613ac
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 0040c9a7 | float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x40],EAX      ; 0040c9ac
    FLD float ptr [ESP + 0x40]          ; 0040c9b0
    ADD ESP,0xc                         ; 0040c9b4
    MOV EDI,dword ptr [0x006810c8]      ; 0040c9b7 | CDemonSet * g_CDemonSetPtr
    PUSH EDI                            ; 0040c9bd | CDemonSet g_CDemonSetInstance
    FSTP float ptr [ESP + 0x28]         ; 0040c9be
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 0040c9c2 | void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040c9c7
    FLD float ptr [ESP + 0x24]          ; 0040c9ca
    FADD double ptr [0x006142c0]        ; 0040c9ce | double DOUBLE_006142c0
    FLD float ptr [ESP + 0x20]          ; 0040c9d4
    FCOMPP                              ; 0040c9d8
    FNSTSW AX                           ; 0040c9da
    SAHF                                ; 0040c9dc
    JNC 0x0040c9eb                      ; 0040c9dd | LAB_0040c9eb
        ;   XREF to: 0040c9eb (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x006810c8]      ; 0040c9df | CDemonSet * g_CDemonSetPtr
    MOV ESI,dword ptr [ESI + 0x14d134]  ; 0040c9e5 | DAT_032613ac
    PUSH dword ptr [ESP + 0x48]         ; 0040c9eb
        ;   Label: LAB_0040c9eb
    PUSH ESI                            ; 0040c9ef
    LEA EDX,[ESP + 0x10]                ; 0040c9f0
    PUSH EDX                            ; 0040c9f4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040c9f5
    PUSH EBX                            ; 0040c9fb
    CALL dword ptr [EAX + 0x20]         ; 0040c9fc
    ADD ESP,0x10                        ; 0040c9ff
    POP ESI                             ; 0040ca02
    POP EDI                             ; 0040ca03
    ADD ESP,0x30                        ; 0040ca04
    POP EBX                             ; 0040ca07
    RET                                 ; 0040ca08

