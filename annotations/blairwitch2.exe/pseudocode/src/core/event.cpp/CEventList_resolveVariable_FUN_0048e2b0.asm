; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_0048e2b0(CEventList *this_ptr,char *identifier)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   identifier
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048e9c1
;
; Referenced Globals:
;   undefined4 DAT_005d438b
;
; Called Functions:
;   core_event.cpp_CEventList_findGameFlag_FUN_00491590
;   core_event.cpp_CEventList_findPersistentEvent_FUN_00491540
;   core_event.cpp_CEventList_findTimer_FUN_004915e0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e2b0
        ;   Label: core_event.cpp_CEventList_resolveVariable_FUN_0048e2b0
    PUSH ESI                            ; 0048e2b1
    PUSH EDI                            ; 0048e2b2
    PUSH EBP                            ; 0048e2b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0048e2b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048e2b8
    PUSH 0x5d438b                       ; 0048e2bc | DAT_005d438b
    PUSH EBP                            ; 0048e2c1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048e2c2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048e2c7
    TEST EAX,EAX                        ; 0048e2ca
    JZ 0x0048e30a                       ; 0048e2cc
        ;   XREF to: 0048e30a (CONDITIONAL_JUMP)  ; LAB_0048e30a
    MOV EDX,dword ptr [EDI + 0xc84]     ; 0048e2ce
    XOR ESI,ESI                         ; 0048e2d4
    TEST EDX,EDX                        ; 0048e2d6
    JLE 0x0048e2fc                      ; 0048e2d8
        ;   XREF to: 0048e2fc (CONDITIONAL_JUMP)  ; LAB_0048e2fc
    LEA EBX,[EDI + 0xc88]               ; 0048e2da
    PUSH EBP                            ; 0048e2e0
        ;   Label: LAB_0048e2e0
    PUSH EBX                            ; 0048e2e1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048e2e2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0048e2e7
    TEST EAX,EAX                        ; 0048e2ea
    JZ 0x0048e30a                       ; 0048e2ec
        ;   XREF to: 0048e30a (CONDITIONAL_JUMP)  ; LAB_0048e30a
    INC ESI                             ; 0048e2ee
    MOV ECX,dword ptr [EDI + 0xc84]     ; 0048e2ef
    ADD EBX,0x20                        ; 0048e2f5
    CMP ESI,ECX                         ; 0048e2f8
    JL 0x0048e2e0                       ; 0048e2fa
        ;   XREF to: 0048e2e0 (CONDITIONAL_JUMP)  ; LAB_0048e2e0
    PUSH EBP                            ; 0048e2fc
        ;   Label: LAB_0048e2fc
    PUSH EDI                            ; 0048e2fd
    CALL core_event.cpp_CEventList_findPersistentEvent_FUN_00491540 ; 0048e2fe
        ;   XREF to: 00491540 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findPersistentEvent_FUN_00491540(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 0048e303
    TEST EAX,EAX                        ; 0048e306
    JL 0x0048e314                       ; 0048e308
        ;   XREF to: 0048e314 (CONDITIONAL_JUMP)  ; LAB_0048e314
    MOV EAX,0x1                         ; 0048e30a
        ;   Label: LAB_0048e30a
    POP EBP                             ; 0048e30f
    POP EDI                             ; 0048e310
    POP ESI                             ; 0048e311
    POP EBX                             ; 0048e312
    RET                                 ; 0048e313
    PUSH EBP                            ; 0048e314
        ;   Label: LAB_0048e314
    PUSH EDI                            ; 0048e315
    CALL core_event.cpp_CEventList_findGameFlag_FUN_00491590 ; 0048e316
        ;   XREF to: 00491590 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findGameFlag_FUN_00491590(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 0048e31b
    TEST EAX,EAX                        ; 0048e31e
    JGE 0x0048e30a                      ; 0048e320
        ;   XREF to: 0048e30a (CONDITIONAL_JUMP)  ; LAB_0048e30a
    PUSH EBP                            ; 0048e322
    PUSH EDI                            ; 0048e323
    CALL core_event.cpp_CEventList_findTimer_FUN_004915e0 ; 0048e324
        ;   XREF to: 004915e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findTimer_FUN_004915e0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 0048e329
    TEST EAX,EAX                        ; 0048e32c
    JGE 0x0048e30a                      ; 0048e32e
        ;   XREF to: 0048e30a (CONDITIONAL_JUMP)  ; LAB_0048e30a
    XOR EAX,EAX                         ; 0048e330
    POP EBP                             ; 0048e332
    POP EDI                             ; 0048e333
    POP ESI                             ; 0048e334
    POP EBX                             ; 0048e335
    RET                                 ; 0048e336

