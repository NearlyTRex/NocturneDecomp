; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_00485370(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_drip.cpp_factoryFuncDrip_FUN_00485340 at 00485353
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485370
        ;   Label: core_drip.cpp_CDrip_ctor_FUN_00485370
    PUSH ESI                            ; 00485371
    PUSH EDI                            ; 00485372
    MOV EBX,dword ptr [ESP + 0x10]      ; 00485373
    PUSH EBX                            ; 00485377
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00485378
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048537d
    ADD EAX,0x158                       ; 00485380
    PUSH EAX                            ; 00485385
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00485386
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048538b
    LEA EBX,[EAX + 0xfffffea8]          ; 0048538e
    PUSH 0x5db56c                       ; 00485394
    LEA EAX,[EBX + 0x158]               ; 00485399
    PUSH EAX                            ; 0048539f
    MOV dword ptr [EBX + 0x154],0x5ff374 ; 004853a0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004853aa
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x2     ; 004853af
    LEA EAX,[EBX + 0x304]               ; 004853b9
    MOV dword ptr [EBX + 0x2d8],0x1     ; 004853bf
    MOV dword ptr [EAX + 0x8],0x0       ; 004853c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004853d0
    MOV dword ptr [EAX + 0x4],EDX       ; 004853d3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004853d6
    MOV dword ptr [EAX],EDX             ; 004853d9
    MOV dword ptr [EBX + 0x2e0],0x40a00000 ; 004853db
    MOV dword ptr [EBX + 0x2e4],0x41200000 ; 004853e5
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004853ef
    MOV ESI,0x5db577                    ; 004853f9
    MOV dword ptr [EBX + 0x2e8],0x0     ; 004853fe
    ADD ESP,0x8                         ; 00485408
    MOV dword ptr [EBX + 0x310],0x41200000 ; 0048540b
    LEA EDI,[EBX + 0x314]               ; 00485415
    MOV dword ptr [EBX + 0x338],0x0     ; 0048541b
    PUSH EDI                            ; 00485425
    MOV AL,byte ptr [ESI]               ; 00485426
        ;   Label: LAB_00485426
    MOV byte ptr [EDI],AL               ; 00485428
    CMP AL,0x0                          ; 0048542a
    JZ 0x0048543e                       ; 0048542c
        ;   XREF to: 0048543e (CONDITIONAL_JUMP)  ; LAB_0048543e
    MOV AL,byte ptr [ESI + 0x1]         ; 0048542e
    ADD ESI,0x2                         ; 00485431
    MOV byte ptr [EDI + 0x1],AL         ; 00485434
    ADD EDI,0x2                         ; 00485437
    CMP AL,0x0                          ; 0048543a
    JNZ 0x00485426                      ; 0048543c
        ;   XREF to: 00485426 (CONDITIONAL_JUMP)  ; LAB_00485426
    POP EDI                             ; 0048543e
        ;   Label: LAB_0048543e
    MOV EAX,EBX                         ; 0048543f
    MOV dword ptr [EBX + 0x334],0x0     ; 00485441
    POP EDI                             ; 0048544b
    POP ESI                             ; 0048544c
    POP EBX                             ; 0048544d
    RET                                 ; 0048544e

