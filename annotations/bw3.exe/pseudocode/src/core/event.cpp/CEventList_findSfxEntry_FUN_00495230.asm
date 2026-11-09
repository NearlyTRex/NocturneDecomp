; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_00495230(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_getSfxHandle_FUN_00495110 at 00495124
;   core_event.cpp_CEventList_setSfxHandle_FUN_00495150 at 00495167
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495230
        ;   Label: core_event.cpp_CEventList_findSfxEntry_FUN_00495230
    PUSH ESI                            ; 00495231
    PUSH EDI                            ; 00495232
    PUSH EBP                            ; 00495233
    MOV EDI,dword ptr [ESP + 0x14]      ; 00495234
    MOV EBP,dword ptr [ESP + 0x18]      ; 00495238
    MOV EDX,dword ptr [EDI + 0x3ac8]    ; 0049523c
    XOR EBX,EBX                         ; 00495242
    TEST EDX,EDX                        ; 00495244
    JLE 0x0049526d                      ; 00495246
        ;   XREF to: 0049526d (CONDITIONAL_JUMP)  ; LAB_0049526d
    LEA ESI,[EDI + 0x3ad0]              ; 00495248
    PUSH EBP                            ; 0049524e
        ;   Label: LAB_0049524e
    PUSH ESI                            ; 0049524f
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00495250
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00495255
    TEST EAX,EAX                        ; 00495258
    JZ 0x00495277                       ; 0049525a
        ;   XREF to: 00495277 (CONDITIONAL_JUMP)  ; LAB_00495277
    INC EBX                             ; 0049525c
    MOV ECX,dword ptr [EDI + 0x3ac8]    ; 0049525d
    ADD ESI,0x120                       ; 00495263
    CMP EBX,ECX                         ; 00495269
    JL 0x0049524e                       ; 0049526b
        ;   XREF to: 0049524e (CONDITIONAL_JUMP)  ; LAB_0049524e
    MOV EAX,0xffffffff                  ; 0049526d
        ;   Label: LAB_0049526d
    POP EBP                             ; 00495272
    POP EDI                             ; 00495273
    POP ESI                             ; 00495274
    POP EBX                             ; 00495275
    RET                                 ; 00495276
    MOV EAX,EBX                         ; 00495277
        ;   Label: LAB_00495277
    POP EBP                             ; 00495279
    POP EDI                             ; 0049527a
    POP ESI                             ; 0049527b
    POP EBX                             ; 0049527c
    RET                                 ; 0049527d

