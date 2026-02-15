; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830(CDemonActor *this_ptr,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   volume
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   float FLOAT_006142b8 = 10000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032613ac
;   undefined4 DAT_032758e8
;   undefined4 g_CDemonCameraInstance.base.position.y
;   undefined4 g_CDemonCameraInstance.base.position.z
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c830
        ;   Label: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830
    PUSH ESI                            ; 0040c831
    PUSH EBP                            ; 0040c832
    SUB ESP,0x18                        ; 0040c833
    MOV ESI,dword ptr [ESP + 0x28]      ; 0040c836
    MOV EAX,[0x032758e8]                ; 0040c83a | DAT_032758e8
    MOV dword ptr [ESP],EAX             ; 0040c83f
    MOV EAX,0x32758e8                   ; 0040c842 | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 0040c847 | g_CDemonCameraInstance.base.position.y
    MOV dword ptr [ESP + 0x4],EAX       ; 0040c84a
    MOV EAX,0x32758e8                   ; 0040c84e | DAT_032758e8
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040c853 | g_CDemonCameraInstance.base.position.z
    LEA EBX,[ESI + 0x20]                ; 0040c856
    MOV dword ptr [ESP + 0x8],EAX       ; 0040c859
    FLD float ptr [EBX]                 ; 0040c85d
    FSUB float ptr [ESP]                ; 0040c85f
    FMUL ST0                            ; 0040c862
    FLD float ptr [EBX + 0x4]           ; 0040c864
    FSUB float ptr [ESP + 0x4]          ; 0040c867
    FMUL ST0                            ; 0040c86b
    FLD float ptr [EBX + 0x8]           ; 0040c86d
    FXCH                                ; 0040c870
    FADDP ST2,ST0                       ; 0040c872
    FSUB float ptr [ESP + 0x8]          ; 0040c874
    FMUL ST0                            ; 0040c878
    FADDP                               ; 0040c87a
    FCOMP float ptr [0x006142b8]        ; 0040c87c | FLOAT_006142b8
    FNSTSW AX                           ; 0040c882
    SAHF                                ; 0040c884
    JBE 0x0040c890                      ; 0040c885
        ;   XREF to: 0040c890 (CONDITIONAL_JUMP)  ; LAB_0040c890
    XOR EAX,EAX                         ; 0040c887
    ADD ESP,0x18                        ; 0040c889
    POP EBP                             ; 0040c88c
    POP ESI                             ; 0040c88d
    POP EBX                             ; 0040c88e
    RET                                 ; 0040c88f
    PUSH EDI                            ; 0040c890
        ;   Label: LAB_0040c890
    PUSH ESI                            ; 0040c891
    MOV EDX,dword ptr [0x006810c8]      ; 0040c892 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0040c898 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0040c899
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040c89e
    PUSH 0x0                            ; 0040c8a1
    PUSH EBX                            ; 0040c8a3
    MOV ECX,dword ptr [0x006810c8]      ; 0040c8a4 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0040c8aa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 0040c8ab
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 0040c8b0
    MOV EDI,dword ptr [0x006810c8]      ; 0040c8b3 | g_CDemonSetPtr
    PUSH EDI                            ; 0040c8b9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 0040c8ba
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    MOV EAX,[0x006810c8]                ; 0040c8bf | g_CDemonSetPtr
    ADD ESP,0x4                         ; 0040c8c4
    MOV EBP,dword ptr [EAX + 0x14d134]  ; 0040c8c7 | DAT_032613ac
    PUSH dword ptr [ESP + 0x30]         ; 0040c8cd
    PUSH EBP                            ; 0040c8d1
    PUSH EBX                            ; 0040c8d2
    MOV EDX,dword ptr [ESI + 0x154]     ; 0040c8d3
    PUSH ESI                            ; 0040c8d9
    CALL dword ptr [EDX + 0x20]         ; 0040c8da
    ADD ESP,0x10                        ; 0040c8dd
    POP EDI                             ; 0040c8e0
    ADD ESP,0x18                        ; 0040c8e1
    POP EBP                             ; 0040c8e4
    POP ESI                             ; 0040c8e5
    POP EBX                             ; 0040c8e6
    RET                                 ; 0040c8e7

