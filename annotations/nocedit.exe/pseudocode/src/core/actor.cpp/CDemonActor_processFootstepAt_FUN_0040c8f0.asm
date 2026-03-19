; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0(CDemonActor *this_ptr,CVector3f *location,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   location
; float            Stack[0xc]:4   volume
; Local Variables:
; CVector3f        Stack[-0x34]:12  local_34
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   float FLOAT_006142bc = 10000
;   double DOUBLE_006142c0 = -1
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ground_type
;   undefined4 g_CDemonCameraInstance.base.position
;   undefined4 g_CDemonCameraInstance.base.position+4
;   undefined4 g_CDemonCameraInstance.base.position+8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c8f0
        ;   Label: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040c8f0
    SUB ESP,0x30                        ; 0040c8f1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0040c8f4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0040c8f8
    PUSH EDX                            ; 0040c8fc
    LEA EAX,[ESP + 0x4]                 ; 0040c8fd
    PUSH EAX                            ; 0040c901
    PUSH EBX                            ; 0040c902
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0040c903
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0040c908
    MOV EAX,[0x032758e8]                ; 0040c90b | g_CDemonCameraInstance.base.position
    FLD float ptr [ESP]                 ; 0040c910
    MOV dword ptr [ESP + 0xc],EAX       ; 0040c913
    MOV EAX,0x32758e8                   ; 0040c917 | g_CDemonCameraInstance.base.position
    FSUB float ptr [ESP + 0xc]          ; 0040c91c
    FMUL ST0                            ; 0040c920
    MOV EAX,dword ptr [EAX + 0x4]       ; 0040c922 | g_CDemonCameraInstance.base.position+4
    FLD float ptr [ESP + 0x4]           ; 0040c925
    MOV dword ptr [ESP + 0x10],EAX      ; 0040c929
    MOV EAX,0x32758e8                   ; 0040c92d | g_CDemonCameraInstance.base.position
    FSUB float ptr [ESP + 0x10]         ; 0040c932
    FMUL ST0                            ; 0040c936
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040c938 | g_CDemonCameraInstance.base.position+8
    FLD float ptr [ESP + 0x8]           ; 0040c93b
    MOV dword ptr [ESP + 0x14],EAX      ; 0040c93f
    FXCH                                ; 0040c943
    FADDP ST2,ST0                       ; 0040c945
    FSUB float ptr [ESP + 0x14]         ; 0040c947
    FMUL ST0                            ; 0040c94b
    FADDP                               ; 0040c94d
    FCOMP float ptr [0x006142bc]        ; 0040c94f | FLOAT_006142bc
    FNSTSW AX                           ; 0040c955
    SAHF                                ; 0040c957
    JBE 0x0040c961                      ; 0040c958
        ;   XREF to: 0040c961 (CONDITIONAL_JUMP)  ; LAB_0040c961
    XOR EAX,EAX                         ; 0040c95a
    ADD ESP,0x30                        ; 0040c95c
    POP EBX                             ; 0040c95f
    RET                                 ; 0040c960
    PUSH EDI                            ; 0040c961
        ;   Label: LAB_0040c961
    PUSH ESI                            ; 0040c962
    PUSH EBX                            ; 0040c963
    MOV ECX,dword ptr [0x006810c8]      ; 0040c964 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0040c96a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0040c96b
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040c970
    LEA EAX,[ESP + 0x8]                 ; 0040c973
    PUSH 0x0                            ; 0040c977
    PUSH EAX                            ; 0040c979
    MOV ESI,dword ptr [0x006810c8]      ; 0040c97a | g_CDemonSetPtr
    PUSH ESI                            ; 0040c980 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 0040c981
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x40],EAX      ; 0040c986
    FLD float ptr [ESP + 0x40]          ; 0040c98a
    ADD ESP,0xc                         ; 0040c98e
    LEA EDX,[EBX + 0x20]                ; 0040c991
    PUSH 0x0                            ; 0040c994
    PUSH EDX                            ; 0040c996
    MOV EAX,[0x006810c8]                ; 0040c997 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0040c99c | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x2c]         ; 0040c99d
    MOV ESI,dword ptr [EAX + 0x14d134]  ; 0040c9a1 | g_CDemonSetInstance.ground_type
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 0040c9a7
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x40],EAX      ; 0040c9ac
    FLD float ptr [ESP + 0x40]          ; 0040c9b0
    ADD ESP,0xc                         ; 0040c9b4
    MOV EDI,dword ptr [0x006810c8]      ; 0040c9b7 | g_CDemonSetPtr
    PUSH EDI                            ; 0040c9bd | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x28]         ; 0040c9be
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 0040c9c2
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040c9c7
    FLD float ptr [ESP + 0x24]          ; 0040c9ca
    FADD double ptr [0x006142c0]        ; 0040c9ce | DOUBLE_006142c0
    FLD float ptr [ESP + 0x20]          ; 0040c9d4
    FCOMPP                              ; 0040c9d8
    FNSTSW AX                           ; 0040c9da
    SAHF                                ; 0040c9dc
    JNC 0x0040c9eb                      ; 0040c9dd
        ;   XREF to: 0040c9eb (CONDITIONAL_JUMP)  ; LAB_0040c9eb
    MOV ESI,dword ptr [0x006810c8]      ; 0040c9df | g_CDemonSetPtr
    MOV ESI,dword ptr [ESI + 0x14d134]  ; 0040c9e5 | g_CDemonSetInstance.ground_type
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

