; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_emitter_cpp_FUN_00487790(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_fire.cpp_FUN_0049db20
;   core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487790
        ;   Label: core_emitter.cpp_FUN_00487790
    PUSH ESI                            ; 00487791
    PUSH EDI                            ; 00487792
    PUSH EBP                            ; 00487793
    MOV EBP,ESP                         ; 00487794
    SUB ESP,0x78                        ; 00487796
    MOV EBX,dword ptr [EBP + 0x14]      ; 00487799
    MOV EDX,dword ptr [0x0060b280]      ; 0048779c | DAT_0060b280
    PUSH EDX                            ; 004877a2 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 004877a3
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004877a8
    TEST EAX,EAX                        ; 004877ab
    JNZ 0x004877c1                      ; 004877ad
        ;   XREF to: 004877c1 (CONDITIONAL_JUMP)  ; LAB_004877c1
    CMP dword ptr [EBX + 0x2b4],0x3     ; 004877af
    JNZ 0x004877c1                      ; 004877b6
        ;   XREF to: 004877c1 (CONDITIONAL_JUMP)  ; LAB_004877c1
    CMP dword ptr [EBX + 0x2c4],0x0     ; 004877b8
    JNZ 0x004877ca                      ; 004877bf
        ;   XREF to: 004877ca (CONDITIONAL_JUMP)  ; LAB_004877ca
    XOR EAX,EAX                         ; 004877c1
        ;   Label: LAB_004877c1
    MOV ESP,EBP                         ; 004877c3
    POP EBP                             ; 004877c5
    POP EDI                             ; 004877c6
    POP ESI                             ; 004877c7
    POP EBX                             ; 004877c8
    RET                                 ; 004877c9
    MOV EDI,dword ptr [0x0061b5a8]      ; 004877ca | g_CDemonSetPtr
        ;   Label: LAB_004877ca
    PUSH EDI                            ; 004877d0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004877d1
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004877d6
    PUSH EBX                            ; 004877d9
    MOV EAX,[0x0061b5a8]                ; 004877da | g_CDemonSetPtr
    PUSH EAX                            ; 004877df | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004877e0
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004877e5
    LEA EAX,[EBP + -0x78]               ; 004877e8
    PUSH EAX                            ; 004877eb
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0 ; 004877ec
        ;   XREF to: 0049dae0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0(SLaserInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0x394]     ; 004877f1
    LEA ESI,[EBP + -0x78]               ; 004877f7
    MOV dword ptr [EBP + -0x70],EAX     ; 004877fa
    ADD ESP,0x4                         ; 004877fd
    MOV EAX,dword ptr [EBX + 0x398]     ; 00487800
    XOR ECX,ECX                         ; 00487806
    MOV dword ptr [EBP + -0x6c],EAX     ; 00487808
    PUSH ECX                            ; 0048780b
    MOV EAX,dword ptr [EBX + 0x39c]     ; 0048780c
    MOV EDX,0x3f800000                  ; 00487812
    MOV dword ptr [EBP + -0x68],EAX     ; 00487817
    SUB ESP,0x54                        ; 0048781a
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0048781d
    MOV EDI,ESP                         ; 00487823
    MOV dword ptr [EBP + -0x64],EAX     ; 00487825
    MOV dword ptr [EBP + -0x78],EDX     ; 00487828
    MOV dword ptr [EBP + -0x60],ECX     ; 0048782b
    MOV dword ptr [EBP + -0x5c],ECX     ; 0048782e
    MOV ECX,0x15                        ; 00487831
    MOV EDX,0x42c80000                  ; 00487836
    LEA EAX,[EBP + -0x18]               ; 0048783b
    MOVSD.REP ES:EDI,ESI                ; 0048783e
    PUSH EAX                            ; 00487840
    LEA ESI,[EBP + -0x24]               ; 00487841
    MOV dword ptr [EBP + -0x10],EDX     ; 00487844
    XOR EDI,EDI                         ; 00487847
    PUSH EBX                            ; 00487849
    MOV dword ptr [EBP + -0x18],EDI     ; 0048784a
    MOV dword ptr [EBP + -0x14],EDI     ; 0048784d
    CALL core_actor.cpp_FUN_00408cf0    ; 00487850
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 00487855
    LEA EAX,[EBP + -0xc]                ; 00487858
    PUSH EAX                            ; 0048785b
    ADD EBX,0x20                        ; 0048785c
    LEA EDI,[EBP + -0xc]                ; 0048785f
    PUSH EBX                            ; 00487862
    MOV ECX,dword ptr [0x00614d30]      ; 00487863 | DAT_00614d30
    LEA ESI,[EBP + -0x24]               ; 00487869
    PUSH ECX                            ; 0048786c
    MOVSD ES:EDI,ESI                    ; 0048786d
    MOVSD ES:EDI,ESI                    ; 0048786e
    MOVSD ES:EDI,ESI                    ; 0048786f
    CALL core_fire.cpp_FUN_0049db20     ; 00487870
        ;   XREF to: 0049db20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049db20()
    ADD ESP,0x64                        ; 00487875
    MOV EBX,dword ptr [0x0061b5a8]      ; 00487878 | g_CDemonSetPtr
    PUSH EBX                            ; 0048787e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0048787f
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    MOV EAX,0x1                         ; 00487884
    ADD ESP,0x4                         ; 00487889
    MOV ESP,EBP                         ; 0048788c
    POP EBP                             ; 0048788e
    POP EDI                             ; 0048788f
    POP ESI                             ; 00487890
    POP EBX                             ; 00487891
    RET                                 ; 00487892

