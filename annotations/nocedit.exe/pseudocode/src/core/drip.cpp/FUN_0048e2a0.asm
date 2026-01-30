; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_drip_cpp_FUN_0048e2a0(void)
;
; Local Variables:
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
;
; Referenced Globals:
;   float FLOAT_006222a3 = -5000
;   double DOUBLE_006222a7 = 32
;   double DOUBLE_006222af = 0.850000000000000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
;   undefined4 DAT_03263318
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0
;   core_set.cpp_CDemonSet_FUN_00570fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e2a0
        ;   Label: core_drip.cpp_FUN_0048e2a0
    PUSH ESI                            ; 0048e2a1
    PUSH EDI                            ; 0048e2a2
    PUSH EBP                            ; 0048e2a3
    SUB ESP,0xa4                        ; 0048e2a4
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0048e2aa
    CMP dword ptr [EBX + 0x2ec],0x0     ; 0048e2b1
    JZ 0x0048e2fe                       ; 0048e2b8
        ;   XREF to: 0048e2fe (CONDITIONAL_JUMP)  ; LAB_0048e2fe
    TEST dword ptr [EBX + 0x2dc],0x7fffffff ; 0048e2ba
        ;   Label: LAB_0048e2ba
    JZ 0x0048e35e                       ; 0048e2c4
        ;   XREF to: 0048e35e (CONDITIONAL_JUMP)  ; LAB_0048e35e
    CMP dword ptr [EBX + 0x2d8],0x0     ; 0048e2ca
    JZ 0x0048e2f3                       ; 0048e2d1
        ;   XREF to: 0048e2f3 (CONDITIONAL_JUMP)  ; LAB_0048e2f3
    FLD float ptr [EBX + 0x2dc]         ; 0048e2d3
    FSUB float ptr [ESP + 0xbc]         ; 0048e2d9
    FST float ptr [EBX + 0x2dc]         ; 0048e2e0
    FLDZ                                ; 0048e2e6
    FCOMPP                              ; 0048e2e8
    FNSTSW AX                           ; 0048e2ea
    SAHF                                ; 0048e2ec
    JA 0x0048e696                       ; 0048e2ed
        ;   XREF to: 0048e696 (CONDITIONAL_JUMP)  ; LAB_0048e696
    ADD ESP,0xa4                        ; 0048e2f3
        ;   Label: LAB_0048e2f3
    POP EBP                             ; 0048e2f9
    POP EDI                             ; 0048e2fa
    POP ESI                             ; 0048e2fb
    POP EBX                             ; 0048e2fc
    RET                                 ; 0048e2fd
    LEA EDX,[EBX + 0x2f8]               ; 0048e2fe
        ;   Label: LAB_0048e2fe
    MOV EAX,dword ptr [EDX]             ; 0048e304
    MOV dword ptr [ESP + 0x6c],EAX      ; 0048e306
    LEA EAX,[EDX + 0x4]                 ; 0048e30a
    MOV EAX,dword ptr [EAX]             ; 0048e30d
    MOV dword ptr [ESP + 0x70],EAX      ; 0048e30f
    LEA EAX,[EDX + 0x8]                 ; 0048e313
    MOV EAX,dword ptr [EAX]             ; 0048e316
    MOV dword ptr [ESP + 0x74],EAX      ; 0048e318
    LEA EAX,[ESP + 0x6c]                ; 0048e31c
    PUSH EAX                            ; 0048e320
    LEA EAX,[ESP + 0x64]                ; 0048e321
    PUSH EDX                            ; 0048e325
    FLD float ptr [ESP + 0x78]          ; 0048e326
    PUSH EAX                            ; 0048e32a
    FADD float ptr [0x006222a3]         ; 0048e32b | FLOAT_006222a3
    PUSH 0x3277d14                      ; 0048e331 | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x80]         ; 0048e336
    CALL core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0 ; 0048e33d
        ;   XREF to: 00495aa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_rayIntersection_FUN_00495aa0(CDemonRaytrace * this_ptr, CVector3f * output_point, CVector3f * ray_start, CVector3f * ray_end)
    ADD ESP,0x10                        ; 0048e342
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048e345
    MOV dword ptr [EBX + 0x2ec],0x1     ; 0048e349
    MOV dword ptr [EBX + 0x2f0],EAX     ; 0048e353
    JMP 0x0048e2ba                      ; 0048e359
        ;   XREF to: 0048e2ba (UNCONDITIONAL_JUMP)  ; LAB_0048e2ba
    FLD float ptr [ESP + 0xbc]          ; 0048e35e
        ;   Label: LAB_0048e35e
    FLD ST0                             ; 0048e365
    FMUL double ptr [0x006222a7]        ; 0048e367 | DOUBLE_006222a7
    FSUBR float ptr [EBX + 0x308]       ; 0048e36d
    FST float ptr [EBX + 0x308]         ; 0048e373
    FMULP                               ; 0048e379
    LEA EAX,[ESP + 0x3c]                ; 0048e37b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0048e37f
    PUSH EAX                            ; 0048e385
    FADD float ptr [EBX + 0x24]         ; 0048e386
    PUSH EBX                            ; 0048e389
    FSTP float ptr [EBX + 0x24]         ; 0048e38a
    CALL dword ptr [EDX + 0x14]         ; 0048e38d
    ADD ESP,0x8                         ; 0048e390
    FLD float ptr [ESP + 0x4c]          ; 0048e393
    FSUB float ptr [ESP + 0x40]         ; 0048e397
    FMUL double ptr [0x006222af]        ; 0048e39b | DOUBLE_006222af
    FSUBR float ptr [EBX + 0x2f0]       ; 0048e3a1
    FLD float ptr [EBX + 0x24]          ; 0048e3a7
    FCOMPP                              ; 0048e3aa
    FNSTSW AX                           ; 0048e3ac
    SAHF                                ; 0048e3ae
    JC 0x0048e41a                       ; 0048e3af
        ;   XREF to: 0048e41a (CONDITIONAL_JUMP)  ; LAB_0048e41a
    LEA EAX,[EBX + 0x20]                ; 0048e3b1
        ;   Label: LAB_0048e3b1
    XOR EDI,EDI                         ; 0048e3b4
    XOR ESI,ESI                         ; 0048e3b6
    MOV dword ptr [ESP + 0x94],EAX      ; 0048e3b8
    MOV EAX,[0x006810c8]                ; 0048e3bf | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0048e3bf
    CMP EDI,dword ptr [EAX + 0x14f098]  ; 0048e3c4 | g_CDemonSetInstance.damage_listener_count
    JGE 0x0048e2f3                      ; 0048e3ca
        ;   XREF to: 0048e2f3 (CONDITIONAL_JUMP)  ; LAB_0048e2f3
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14f09c] ; 0048e3d0 | g_CDemonSetInstance.damage_listeners | DAT_03263318
    MOV EAX,ESP                         ; 0048e3d7
    PUSH EAX                            ; 0048e3d9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0048e3da
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0048e3df
    MOV EDX,ESP                         ; 0048e3e2
    MOV EAX,dword ptr [EBX + 0x310]     ; 0048e3e4
    PUSH EDX                            ; 0048e3ea
    MOV dword ptr [ESP + 0x8],EAX       ; 0048e3eb
    MOV dword ptr [ESP + 0x38],EBX      ; 0048e3ef
    PUSH 0x3f800000                     ; 0048e3f3
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0048e3f8
    MOV dword ptr [ESP + 0x40],EBX      ; 0048e3ff
    PUSH EDX                            ; 0048e403
    MOV EAX,dword ptr [EBP + 0x154]     ; 0048e404
    PUSH EBP                            ; 0048e40a
    ADD ESI,0x4                         ; 0048e40b
    INC EDI                             ; 0048e40e
    CALL dword ptr [EAX + 0x114]        ; 0048e40f
    ADD ESP,0x10                        ; 0048e415
    JMP 0x0048e3bf                      ; 0048e418
        ;   XREF to: 0048e3bf (UNCONDITIONAL_JUMP)  ; LAB_0048e3bf
    CMP dword ptr [EBX + 0x338],0x0     ; 0048e41a
        ;   Label: LAB_0048e41a
    JZ 0x0048e454                       ; 0048e421
        ;   XREF to: 0048e454 (CONDITIONAL_JUMP)  ; LAB_0048e454
    PUSH 0x3f800000                     ; 0048e423
    PUSH 0x0                            ; 0048e428
    PUSH 0x0                            ; 0048e42a
    MOV EBP,dword ptr [0x006810c8]      ; 0048e42c | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 0048e432
    PUSH EBP                            ; 0048e437 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570fa0 ; 0048e438
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570fa0(CDemonSet * this_ptr)
    ADD ESP,0x14                        ; 0048e43d
    LEA EDX,[EBX + 0x314]               ; 0048e440
    PUSH EDX                            ; 0048e446
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048e447
    PUSH EBX                            ; 0048e44d
    CALL dword ptr [EAX + 0x24]         ; 0048e44e
    ADD ESP,0x8                         ; 0048e451
    FLD float ptr [EBX + 0x2f0]         ; 0048e454
        ;   Label: LAB_0048e454
    MOV EAX,dword ptr [EBX + 0x334]     ; 0048e45a
    FSTP float ptr [EBX + 0x24]         ; 0048e460
    TEST EAX,EAX                        ; 0048e463
    JNZ 0x0048e5f0                      ; 0048e465
        ;   XREF to: 0048e5f0 (CONDITIONAL_JUMP)  ; LAB_0048e5f0
    LEA ESI,[EBX + 0x20]                ; 0048e46b
    XOR EDI,EDI                         ; 0048e46e
    PUSH 0x3f000000                     ; 0048e470
        ;   Label: LAB_0048e470
    PUSH 0xbf000000                     ; 0048e475
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048e47a
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH 0x3f800000                     ; 0048e5f0
        ;   Label: LAB_0048e5f0
    FLD float ptr [EBX + 0x2fc]         ; 0048e5f5
    PUSH 0x0                            ; 0048e5fb
    FSTP float ptr [EBX + 0x24]         ; 0048e5fd
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048e600
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0048e696
        ;   Label: LAB_0048e696
    ADD ESP,0xa4                        ; 0048e6a0
    POP EBP                             ; 0048e6a6
    POP EDI                             ; 0048e6a7
    POP ESI                             ; 0048e6a8
    POP EBX                             ; 0048e6a9
    RET                                 ; 0048e6aa

