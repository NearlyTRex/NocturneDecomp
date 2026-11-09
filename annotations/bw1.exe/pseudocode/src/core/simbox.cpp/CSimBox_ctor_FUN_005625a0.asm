; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_005625a0(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_simbox.cpp_factoryFuncSimBox_FUN_00562570 at 00562583
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_box.cpp_CBox_ctor_FUN_0041da00
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005625a0
        ;   Label: core_simbox.cpp_CSimBox_ctor_FUN_005625a0
    PUSH ESI                            ; 005625a1
    PUSH EDI                            ; 005625a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005625a3
    PUSH EBX                            ; 005625a7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 005625a8
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005625ad
    ADD EAX,0x158                       ; 005625b0
    PUSH EAX                            ; 005625b5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 005625b6
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005625bb
    ADD EAX,0x200                       ; 005625be
    PUSH EAX                            ; 005625c3
    CALL core_box.cpp_CBox_ctor_FUN_0041da00 ; 005625c4
        ;   XREF to: 0041da00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041da00(CBox * this_ptr)
    ADD ESP,0x4                         ; 005625c9
    LEA EBX,[EAX + 0xfffffca8]          ; 005625cc
    PUSH 0x5f1a53                       ; 005625d2
    LEA EAX,[EBX + 0x158]               ; 005625d7
    PUSH EAX                            ; 005625dd
    MOV dword ptr [EBX + 0x154],0x605764 ; 005625de
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 005625e8
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005625ed
    MOV ESI,0x5f1a60                    ; 005625f0
    LEA EDI,[EBX + 0x2dc]               ; 005625f5
    PUSH EDI                            ; 005625fb
    MOV AL,byte ptr [ESI]               ; 005625fc
        ;   Label: LAB_005625fc
    MOV byte ptr [EDI],AL               ; 005625fe
    CMP AL,0x0                          ; 00562600
    JZ 0x00562614                       ; 00562602
        ;   XREF to: 00562614 (CONDITIONAL_JUMP)  ; LAB_00562614
    MOV AL,byte ptr [ESI + 0x1]         ; 00562604
    ADD ESI,0x2                         ; 00562607
    MOV byte ptr [EDI + 0x1],AL         ; 0056260a
    ADD EDI,0x2                         ; 0056260d
    CMP AL,0x0                          ; 00562610
    JNZ 0x005625fc                      ; 00562612
        ;   XREF to: 005625fc (CONDITIONAL_JUMP)  ; LAB_005625fc
    POP EDI                             ; 00562614
        ;   Label: LAB_00562614
    LEA EAX,[EBX + 0x340]               ; 00562615
    MOV dword ptr [EAX + 0x8],0x0       ; 0056261b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00562622
    MOV dword ptr [EAX + 0x4],EDX       ; 00562625
    MOV EDX,dword ptr [EAX + 0x4]       ; 00562628
    MOV dword ptr [EAX],EDX             ; 0056262b
    LEA EAX,[EBX + 0x34c]               ; 0056262d
    MOV dword ptr [EAX + 0x8],0x0       ; 00562633
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056263a
    MOV dword ptr [EAX + 0x4],EDX       ; 0056263d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00562640
    MOV dword ptr [EAX],EDX             ; 00562643
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00562645
    MOV EAX,EBX                         ; 0056264f
    MOV dword ptr [EBX + 0x2d8],0x42c80000 ; 00562651
    POP EDI                             ; 0056265b
    POP ESI                             ; 0056265c
    POP EBX                             ; 0056265d
    RET                                 ; 0056265e

