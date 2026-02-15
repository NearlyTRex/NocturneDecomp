; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap *this_ptr,float delta_time)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.enemy_count
;   undefined4 DAT_03265258
;   undefined4 g_CWerewolfClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de770
        ;   Label: core_trap.cpp_CTrap_process_FUN_005de770
    PUSH ESI                            ; 005de771
    PUSH EDI                            ; 005de772
    PUSH EBP                            ; 005de773
    SUB ESP,0x88                        ; 005de774
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005de77a
    CMP dword ptr [ESI + 0x2d4],0x0     ; 005de781
    JNZ 0x005de7b8                      ; 005de788
        ;   XREF to: 005de7b8 (CONDITIONAL_JUMP)  ; LAB_005de7b8
    MOV ECX,dword ptr [ESI + 0x2d8]     ; 005de78a
    TEST ECX,ECX                        ; 005de790
    JNZ 0x005de7c3                      ; 005de792
        ;   XREF to: 005de7c3 (CONDITIONAL_JUMP)  ; LAB_005de7c3
    LEA EDX,[ESP + 0x64]                ; 005de794
        ;   Label: LAB_005de794
    PUSH EDX                            ; 005de798
    MOV EAX,dword ptr [ESI + 0x154]     ; 005de799
    PUSH ESI                            ; 005de79f
    XOR EBP,EBP                         ; 005de7a0
    XOR EDI,EDI                         ; 005de7a2
    CALL dword ptr [EAX + 0x14]         ; 005de7a4
    ADD ESP,0x8                         ; 005de7a7
    MOV EBX,dword ptr [0x006810c8]      ; 005de7aa | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005de7aa
    CMP EBP,dword ptr [EBX + 0x150fdc]  ; 005de7b0 | g_CDemonSetInstance.enemy_count
    JL 0x005de7f9                       ; 005de7b6
        ;   XREF to: 005de7f9 (CONDITIONAL_JUMP)  ; LAB_005de7f9
    ADD ESP,0x88                        ; 005de7b8
        ;   Label: LAB_005de7b8
    POP EBP                             ; 005de7be
    POP EDI                             ; 005de7bf
    POP ESI                             ; 005de7c0
    POP EBX                             ; 005de7c1
    RET                                 ; 005de7c2
    PUSH ECX                            ; 005de7c3
        ;   Label: LAB_005de7c3
    MOV EDX,dword ptr [ECX + 0x154]     ; 005de7c4
    CALL dword ptr [EDX + 0x120]        ; 005de7ca
    ADD ESP,0x4                         ; 005de7d0
    TEST EAX,EAX                        ; 005de7d3
    JZ 0x005de7b8                       ; 005de7d5
        ;   XREF to: 005de7b8 (CONDITIONAL_JUMP)  ; LAB_005de7b8
    MOV EAX,dword ptr [ESI + 0x2d8]     ; 005de7d7
    MOV dword ptr [EAX + 0xbee8],0x0    ; 005de7dd
    MOV dword ptr [ESI + 0x2d8],0x0     ; 005de7e7
    JMP 0x005de794                      ; 005de7f1
        ;   XREF to: 005de794 (UNCONDITIONAL_JUMP)  ; LAB_005de794
    INC EBP                             ; 005de7f3
        ;   Label: LAB_005de7f3
    ADD EDI,0x4                         ; 005de7f4
    JMP 0x005de7aa                      ; 005de7f7
        ;   XREF to: 005de7aa (UNCONDITIONAL_JUMP)  ; LAB_005de7aa
    MOV EDX,dword ptr [0x03f96b94]      ; 005de7f9 | g_CWerewolfClassInfo.name_hash
        ;   Label: LAB_005de7f9
    PUSH EDX                            ; 005de7ff
    MOV ECX,dword ptr [EDI + EBX*0x1 + 0x150fe0] ; 005de800 | DAT_03265258
    PUSH ECX                            ; 005de807
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005de808
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 005de80d
    ADD ESP,0x8                         ; 005de80f
    TEST EAX,EAX                        ; 005de812
    JZ 0x005de7f3                       ; 005de814
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    CMP dword ptr [EAX + 0xbee8],0x0    ; 005de816
    JNZ 0x005de7f3                      ; 005de81d
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    LEA EAX,[ESP + 0x3c]                ; 005de81f
    PUSH EAX                            ; 005de823
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 005de824
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005de829
    LEA EAX,[ESP + 0x3c]                ; 005de82c
    PUSH EAX                            ; 005de830
    MOV EDX,dword ptr [EBX + 0x154]     ; 005de831
    PUSH EBX                            ; 005de837
    CALL dword ptr [EDX + 0x34]         ; 005de838
    ADD ESP,0x8                         ; 005de83b
    FLD float ptr [ESI + 0x24]          ; 005de83e
    FADD float ptr [ESP + 0x74]         ; 005de841
    FCOMP float ptr [EBX + 0x24]        ; 005de845
    FNSTSW AX                           ; 005de848
    SAHF                                ; 005de84a
    JC 0x005de7f3                       ; 005de84b
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    FLD float ptr [EBX + 0x24]          ; 005de84d
    FADD float ptr [ESP + 0x54]         ; 005de850
    FLD float ptr [ESI + 0x24]          ; 005de854
    FADD float ptr [ESP + 0x68]         ; 005de857
    FCOMPP                              ; 005de85b
    FNSTSW AX                           ; 005de85d
    SAHF                                ; 005de85f
    JA 0x005de7f3                       ; 005de860
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    LEA EAX,[EBX + 0x20]                ; 005de862
    PUSH EAX                            ; 005de865
    LEA EAX,[ESP + 0x80]                ; 005de866
    PUSH EAX                            ; 005de86d
    PUSH ESI                            ; 005de86e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005de86f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005de874
    FLD float ptr [ESP + 0x7c]          ; 005de877
    FADD float ptr [ESP + 0x58]         ; 005de87b
    FCOMP float ptr [ESP + 0x64]        ; 005de87f
    FNSTSW AX                           ; 005de883
    SAHF                                ; 005de885
    JC 0x005de7f3                       ; 005de886
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    FLD float ptr [ESP + 0x7c]          ; 005de88c
    FSUB float ptr [ESP + 0x58]         ; 005de890
    FCOMP float ptr [ESP + 0x70]        ; 005de894
    FNSTSW AX                           ; 005de898
    SAHF                                ; 005de89a
    JA 0x005de7f3                       ; 005de89b
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    FLD float ptr [ESP + 0x84]          ; 005de8a1
    FADD float ptr [ESP + 0x58]         ; 005de8a8
    FCOMP float ptr [ESP + 0x6c]        ; 005de8ac
    FNSTSW AX                           ; 005de8b0
    SAHF                                ; 005de8b2
    JC 0x005de7f3                       ; 005de8b3
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    FLD float ptr [ESP + 0x84]          ; 005de8b9
    FSUB float ptr [ESP + 0x58]         ; 005de8c0
    FCOMP float ptr [ESP + 0x78]        ; 005de8c4
    FNSTSW AX                           ; 005de8c8
    SAHF                                ; 005de8ca
    JA 0x005de7f3                       ; 005de8cb
        ;   XREF to: 005de7f3 (CONDITIONAL_JUMP)  ; LAB_005de7f3
    MOV dword ptr [ESI + 0x2d8],EBX     ; 005de8d1
    MOV EAX,ESP                         ; 005de8d7
    MOV dword ptr [EBX + 0xbeec],0x40000000 ; 005de8d9
    PUSH EAX                            ; 005de8e3
    MOV dword ptr [EBX + 0xbee8],ESI    ; 005de8e4
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005de8ea
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005de8ef
    MOV EAX,ESP                         ; 005de8f2
    MOV EDX,0x41200000                  ; 005de8f4
    PUSH EAX                            ; 005de8f9
    MOV dword ptr [ESP + 0x8],EDX       ; 005de8fa
    PUSH EBX                            ; 005de8fe
    MOV EDX,dword ptr [EBX + 0x154]     ; 005de8ff
    CALL dword ptr [EDX + 0x11c]        ; 005de905
    ADD ESP,0x8                         ; 005de90b
    ADD ESP,0x88                        ; 005de90e
    POP EBP                             ; 005de914
    POP EDI                             ; 005de915
    POP ESI                             ; 005de916
    POP EBX                             ; 005de917
    RET                                 ; 005de918

