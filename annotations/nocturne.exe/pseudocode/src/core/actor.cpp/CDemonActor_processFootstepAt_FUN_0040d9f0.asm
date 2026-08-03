; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(CDemonActor *this_ptr,CVector3f *location,float volume)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   location
; float            Stack[0xc]:4   volume
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
;   float FLOAT_00578015 = 10000
;   double DOUBLE_00578019 = -1
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.ground_type
;   undefined4 g_CDemonCamera_01fb8508.position.x
;   undefined4 g_CDemonCamera_01fb8508.position.y
;   undefined4 g_CDemonCamera_01fb8508.position.z
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d9f0
        ;   Label: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0
    SUB ESP,0x30                        ; 0040d9f1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0040d9f4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0040d9f8
    PUSH EDX                            ; 0040d9fc
    LEA EAX,[ESP + 0x4]                 ; 0040d9fd
    PUSH EAX                            ; 0040da01
    PUSH EBX                            ; 0040da02
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0040da03
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0040da08
    MOV EAX,[0x01fb860c]                ; 0040da0b | g_CDemonCamera_01fb8508.position.x
    FLD float ptr [ESP]                 ; 0040da10
    MOV dword ptr [ESP + 0xc],EAX       ; 0040da13
    MOV EAX,0x1fb860c                   ; 0040da17
    FSUB float ptr [ESP + 0xc]          ; 0040da1c
    FMUL ST0                            ; 0040da20
    MOV EAX,dword ptr [EAX + 0x4]       ; 0040da22 | g_CDemonCamera_01fb8508.position.y
    FLD float ptr [ESP + 0x4]           ; 0040da25
    MOV dword ptr [ESP + 0x10],EAX      ; 0040da29
    MOV EAX,0x1fb860c                   ; 0040da2d
    FSUB float ptr [ESP + 0x10]         ; 0040da32
    FMUL ST0                            ; 0040da36
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040da38 | g_CDemonCamera_01fb8508.position.z
    FLD float ptr [ESP + 0x8]           ; 0040da3b
    MOV dword ptr [ESP + 0x14],EAX      ; 0040da3f
    FXCH                                ; 0040da43
    FADDP ST2,ST0                       ; 0040da45
    FSUB float ptr [ESP + 0x14]         ; 0040da47
    FMUL ST0                            ; 0040da4b
    FADDP                               ; 0040da4d
    FCOMP float ptr [0x00578015]        ; 0040da4f | FLOAT_00578015
    FNSTSW AX                           ; 0040da55
    SAHF                                ; 0040da57
    JBE 0x0040da61                      ; 0040da58
        ;   XREF to: 0040da61 (CONDITIONAL_JUMP)  ; LAB_0040da61
    XOR EAX,EAX                         ; 0040da5a
    ADD ESP,0x30                        ; 0040da5c
    POP EBX                             ; 0040da5f
    RET                                 ; 0040da60
    PUSH EDI                            ; 0040da61
        ;   Label: LAB_0040da61
    PUSH ESI                            ; 0040da62
    PUSH EBX                            ; 0040da63
    MOV ECX,dword ptr [0x005be368]      ; 0040da64 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0040da6a | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0040da6b
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040da70
    LEA EAX,[ESP + 0x8]                 ; 0040da73
    PUSH 0x0                            ; 0040da77
    PUSH EAX                            ; 0040da79
    MOV ESI,dword ptr [0x005be368]      ; 0040da7a | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 0040da80 | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 0040da81
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x40],EAX      ; 0040da86
    FLD float ptr [ESP + 0x40]          ; 0040da8a
    ADD ESP,0xc                         ; 0040da8e
    LEA EDX,[EBX + 0x20]                ; 0040da91
    PUSH 0x0                            ; 0040da94
    PUSH EDX                            ; 0040da96
    MOV EAX,[0x005be368]                ; 0040da97 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0040da9c | g_CDemonSet_01e57284
    FSTP float ptr [ESP + 0x2c]         ; 0040da9d
    MOV ESI,dword ptr [EAX + 0x14cd4c]  ; 0040daa1 | g_CDemonSet_01e57284.ground_type
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80 ; 0040daa7
        ;   XREF to: 0050ec80 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x40],EAX      ; 0040daac
    FLD float ptr [ESP + 0x40]          ; 0040dab0
    ADD ESP,0xc                         ; 0040dab4
    MOV EDI,dword ptr [0x005be368]      ; 0040dab7 | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 0040dabd | g_CDemonSet_01e57284
    FSTP float ptr [ESP + 0x28]         ; 0040dabe
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0040dac2
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040dac7
    FLD float ptr [ESP + 0x24]          ; 0040daca
    FADD double ptr [0x00578019]        ; 0040dace | DOUBLE_00578019
    FLD float ptr [ESP + 0x20]          ; 0040dad4
    FCOMPP                              ; 0040dad8
    FNSTSW AX                           ; 0040dada
    SAHF                                ; 0040dadc
    JNC 0x0040daeb                      ; 0040dadd
        ;   XREF to: 0040daeb (CONDITIONAL_JUMP)  ; LAB_0040daeb
    MOV ESI,dword ptr [0x005be368]      ; 0040dadf | g_CDemonSet_PTR_005be368
    MOV ESI,dword ptr [ESI + 0x14cd4c]  ; 0040dae5 | g_CDemonSet_01e57284.ground_type
    PUSH dword ptr [ESP + 0x48]         ; 0040daeb
        ;   Label: LAB_0040daeb
    PUSH ESI                            ; 0040daef
    LEA EDX,[ESP + 0x10]                ; 0040daf0
    PUSH EDX                            ; 0040daf4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040daf5
    PUSH EBX                            ; 0040dafb
    CALL dword ptr [EAX + 0x20]         ; 0040dafc
    ADD ESP,0x10                        ; 0040daff
    POP ESI                             ; 0040db02
    POP EDI                             ; 0040db03
    ADD ESP,0x30                        ; 0040db04
    POP EBX                             ; 0040db07
    RET                                 ; 0040db08

