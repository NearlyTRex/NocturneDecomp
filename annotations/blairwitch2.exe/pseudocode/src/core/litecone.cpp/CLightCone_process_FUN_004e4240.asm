; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_litecone_cpp_CLightCone_process_FUN_004e4240(CLightCone *this_ptr,float delta_time)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4240
        ;   Label: core_litecone.cpp_CLightCone_process_FUN_004e4240
    PUSH ESI                            ; 004e4241
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e4242
    CMP dword ptr [EBX + 0x2bc],0x0     ; 004e4246
    JNZ 0x004e4279                      ; 004e424d
        ;   XREF to: 004e4279 (CONDITIONAL_JUMP)  ; LAB_004e4279
    LEA EAX,[EBX + 0x2c0]               ; 004e424f
    PUSH EAX                            ; 004e4255
    MOV ESI,dword ptr [0x006141f0]      ; 004e4256 | DAT_006141f0
    PUSH ESI                            ; 004e425c
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004e425d
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004e4262
    TEST EAX,EAX                        ; 004e4265
    JNZ 0x004e426c                      ; 004e4267
        ;   XREF to: 004e426c (CONDITIONAL_JUMP)  ; LAB_004e426c
    POP ESI                             ; 004e4269
        ;   Label: LAB_004e4269
    POP EBX                             ; 004e426a
    RET                                 ; 004e426b
    MOV dword ptr [EBX + 0x2bc],0x1     ; 004e426c
        ;   Label: LAB_004e426c
    POP ESI                             ; 004e4276
    POP EBX                             ; 004e4277
    RET                                 ; 004e4278
    LEA EAX,[EBX + 0x324]               ; 004e4279
        ;   Label: LAB_004e4279
    PUSH EAX                            ; 004e427f
    MOV ECX,dword ptr [0x006141f0]      ; 004e4280 | DAT_006141f0
    PUSH ECX                            ; 004e4286
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004e4287
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004e428c
    TEST EAX,EAX                        ; 004e428f
    JZ 0x004e4269                       ; 004e4291
        ;   XREF to: 004e4269 (CONDITIONAL_JUMP)  ; LAB_004e4269
    MOV dword ptr [EBX + 0x2bc],0x0     ; 004e4293
    POP ESI                             ; 004e429d
    POP EBX                             ; 004e429e
    RET                                 ; 004e429f

