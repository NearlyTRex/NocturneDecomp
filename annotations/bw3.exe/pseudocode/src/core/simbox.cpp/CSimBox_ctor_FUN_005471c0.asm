; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_005471c0(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_simbox.cpp_factoryFuncSimBox_FUN_00547190 at 005471a3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_box.cpp_CBox_ctor_FUN_0041ad40
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005471c0
        ;   Label: core_simbox.cpp_CSimBox_ctor_FUN_005471c0
    PUSH ESI                            ; 005471c1
    PUSH EDI                            ; 005471c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005471c3
    PUSH EBX                            ; 005471c7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 005471c8
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005471cd
    ADD EAX,0x158                       ; 005471d0
    PUSH EAX                            ; 005471d5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 005471d6
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005471db
    ADD EAX,0x200                       ; 005471de
    PUSH EAX                            ; 005471e3
    CALL core_box.cpp_CBox_ctor_FUN_0041ad40 ; 005471e4
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041ad40(CBox * this_ptr)
    ADD ESP,0x4                         ; 005471e9
    LEA EBX,[EAX + 0xfffffca8]          ; 005471ec
    PUSH 0x5d157e                       ; 005471f2
    LEA EAX,[EBX + 0x158]               ; 005471f7
    PUSH EAX                            ; 005471fd
    MOV dword ptr [EBX + 0x154],0x5e4634 ; 005471fe
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00547208
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054720d
    MOV ESI,0x5d158b                    ; 00547210
    LEA EDI,[EBX + 0x2dc]               ; 00547215
    PUSH EDI                            ; 0054721b
    MOV AL,byte ptr [ESI]               ; 0054721c
        ;   Label: LAB_0054721c
    MOV byte ptr [EDI],AL               ; 0054721e
    CMP AL,0x0                          ; 00547220
    JZ 0x00547234                       ; 00547222
        ;   XREF to: 00547234 (CONDITIONAL_JUMP)  ; LAB_00547234
    MOV AL,byte ptr [ESI + 0x1]         ; 00547224
    ADD ESI,0x2                         ; 00547227
    MOV byte ptr [EDI + 0x1],AL         ; 0054722a
    ADD EDI,0x2                         ; 0054722d
    CMP AL,0x0                          ; 00547230
    JNZ 0x0054721c                      ; 00547232
        ;   XREF to: 0054721c (CONDITIONAL_JUMP)  ; LAB_0054721c
    POP EDI                             ; 00547234
        ;   Label: LAB_00547234
    LEA EAX,[EBX + 0x340]               ; 00547235
    MOV dword ptr [EAX + 0x8],0x0       ; 0054723b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00547242
    MOV dword ptr [EAX + 0x4],EDX       ; 00547245
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547248
    MOV dword ptr [EAX],EDX             ; 0054724b
    LEA EAX,[EBX + 0x34c]               ; 0054724d
    MOV dword ptr [EAX + 0x8],0x0       ; 00547253
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054725a
    MOV dword ptr [EAX + 0x4],EDX       ; 0054725d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547260
    MOV dword ptr [EAX],EDX             ; 00547263
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00547265
    MOV EAX,EBX                         ; 0054726f
    MOV dword ptr [EBX + 0x2d8],0x42c80000 ; 00547271
    POP EDI                             ; 0054727b
    POP ESI                             ; 0054727c
    POP EBX                             ; 0054727d
    RET                                 ; 0054727e

