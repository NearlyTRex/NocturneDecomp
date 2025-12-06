; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonSet * core_set.cpp_CDemonSet_dtor_FUN_00569350(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_set.cpp_CDemonSet_clear_FUN_005693c0
;   core_set.cpp_free3DSCameras_FUN_00571530
;   core_set.cpp_free3DSLights_FUN_00571550
;   core_set.cpp_freeRooms_FUN_00571570
;   core_set.cpp_freeVDBoxes_FUN_00571590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569350
        ;   Label: core_set.cpp_CDemonSet_dtor_FUN_00569350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00569351
    PUSH EBX                            ; 00569355
    CALL core_set.cpp_CDemonSet_clear_FUN_005693c0 ; 00569356 | void core_set.cpp_CDemonSet_clear_FUN_005693c0(CDemonSet * this_ptr)
        ;   XREF to: 005693c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056935b
    PUSH 0x0                            ; 0056935e
    ADD EBX,0x15b414                    ; 00569360
    PUSH EBX                            ; 00569366
    CALL core_set.cpp_freeVDBoxes_FUN_00571590 ; 00569367 | void core_set.cpp_freeVDBoxes_FUN_00571590(SVDBox * * array)
        ;   XREF to: 00571590 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056936c
    PUSH 0x0                            ; 0056936f
    SUB EAX,0x554                       ; 00569371
    PUSH EAX                            ; 00569376
    CALL core_set.cpp_freeRooms_FUN_00571570 ; 00569377 | void core_set.cpp_freeRooms_FUN_00571570(SRoom * * array)
        ;   XREF to: 00571570 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056937c
    PUSH 0x0                            ; 0056937f
    SUB EAX,0x141490                    ; 00569381
    PUSH EAX                            ; 00569386
    CALL core_set.cpp_free3DSLights_FUN_00571550 ; 00569387 | void core_set.cpp_free3DSLights_FUN_00571550(C3DSLight * * array)
        ;   XREF to: 00571550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056938c
    PUSH 0x0                            ; 0056938f
    SUB EAX,0x19a2c                     ; 00569391
    PUSH EAX                            ; 00569396
    CALL core_set.cpp_free3DSCameras_FUN_00571530 ; 00569397 | void core_set.cpp_free3DSCameras_FUN_00571530(C3DSCamera * * array)
        ;   XREF to: 00571530 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0056939c
    SUB EAX,0x4                         ; 0056939f
    POP EBX                             ; 005693a2
    LEA EAX,[EAX]                       ; 005693a3
    LEA EDX,[EDX]                       ; 005693a9
    NOP                                 ; 005693af
    RET                                 ; 005693b0

