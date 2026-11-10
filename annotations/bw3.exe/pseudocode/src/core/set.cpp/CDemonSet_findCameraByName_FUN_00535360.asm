; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_00535360(CDemonSet *this_ptr,char *name)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[3]:
;   core_event.cpp_FUN_0048c2e0 at 0048f94b
;   core_platfrm.cpp_CPlatform_process_FUN_005114f0 at 005115ef
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c58b
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535360
        ;   Label: core_set.cpp_CDemonSet_findCameraByName_FUN_00535360
    PUSH ESI                            ; 00535361
    PUSH EDI                            ; 00535362
    PUSH EBP                            ; 00535363
    MOV EDI,dword ptr [ESP + 0x14]      ; 00535364
    MOV EBP,dword ptr [ESP + 0x18]      ; 00535368
    MOV EDX,dword ptr [EDI]             ; 0053536c
    XOR EBX,EBX                         ; 0053536e
    TEST EDX,EDX                        ; 00535370
    JLE 0x00535392                      ; 00535372
        ;   XREF to: 00535392 (CONDITIONAL_JUMP)  ; LAB_00535392
    LEA ESI,[EDI + 0x4]                 ; 00535374
    PUSH EBP                            ; 00535377
        ;   Label: LAB_00535377
    PUSH ESI                            ; 00535378
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00535379
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0053537e
    TEST EAX,EAX                        ; 00535381
    JZ 0x0053539c                       ; 00535383
        ;   XREF to: 0053539c (CONDITIONAL_JUMP)  ; LAB_0053539c
    INC EBX                             ; 00535385
    MOV ECX,dword ptr [EDI]             ; 00535386
    ADD ESI,0x1a4                       ; 00535388
    CMP EBX,ECX                         ; 0053538e
    JL 0x00535377                       ; 00535390
        ;   XREF to: 00535377 (CONDITIONAL_JUMP)  ; LAB_00535377
    MOV EAX,0xffffffff                  ; 00535392
        ;   Label: LAB_00535392
    POP EBP                             ; 00535397
    POP EDI                             ; 00535398
    POP ESI                             ; 00535399
    POP EBX                             ; 0053539a
    RET                                 ; 0053539b
    MOV EAX,EBX                         ; 0053539c
        ;   Label: LAB_0053539c
    POP EBP                             ; 0053539e
    POP EDI                             ; 0053539f
    POP ESI                             ; 005353a0
    POP EBX                             ; 005353a1
    RET                                 ; 005353a2

