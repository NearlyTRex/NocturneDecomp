; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance * this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_FUN_0042af60 at 0042b0a5
;   core_morph.cpp_FUN_0052bcb0 at 0052c8ab
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 at 005a018b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064ee38
;   TerminatedCString s_CDeformableModelInstance_0064ee4d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0340
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
    PUSH EDI                            ; 005a0341
    PUSH EBP                            ; 005a0342
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a0343
    CMP dword ptr [EBX + 0x2230],0x0    ; 005a0347
    JL 0x005a0385                       ; 005a034e
        ;   XREF to: 005a0385 (CONDITIONAL_JUMP)  ; LAB_005a0385
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a0350
        ;   Label: LAB_005a0350
    PUSH EDI                            ; 005a0354
    MOV EBP,dword ptr [ESP + 0x18]      ; 005a0355
    PUSH EBP                            ; 005a0359
    LEA EAX,[EBX + 0x21b8]              ; 005a035a
    PUSH EAX                            ; 005a0360
    LEA EAX,[EBX + 0x2140]              ; 005a0361
    PUSH EAX                            ; 005a0367
    MOV EAX,dword ptr [EBX + 0x2230]    ; 005a0368
    PUSH EAX                            ; 005a036e
    PUSH EBX                            ; 005a036f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a0370
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a0375
    PUSH EAX                            ; 005a0378
    CALL core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0 ; 005a0379
        ;   XREF to: 0059abf0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0(CDeformableModel * this_ptr, int lod_index, byte * part_visibility_flags, int * texture_set_indices, ...)
    ADD ESP,0x18                        ; 005a037e
    POP EBP                             ; 005a0381
    POP EDI                             ; 005a0382
    POP EBX                             ; 005a0383
    RET                                 ; 005a0384
    PUSH ESI                            ; 005a0385
        ;   Label: LAB_005a0385
    MOV ECX,0x64ee38                    ; 005a0386 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xd23                       ; 005a038b
    PUSH 0x64ee4d                       ; 005a0390 | = "CDeformableModelInstance::renderPolyg..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a0395 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a039b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a03a1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a03a6
    POP ESI                             ; 005a03a9
    JMP 0x005a0350                      ; 005a03aa
        ;   XREF to: 005a0350 (UNCONDITIONAL_JUMP)  ; LAB_005a0350

