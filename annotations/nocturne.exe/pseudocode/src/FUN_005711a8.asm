; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005711a8(void)
;
;
; XREF[1]:
;   FUN_0056e52c at 0056e558
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_00575500 = 00175ce8
;   void* PTR_TlsSetValue_005755cc = 001760aa
;   TerminatedCString s_Unable_to_resize_thread_0059919c
;   TerminatedCString s_Unable_to_resize_thread_005991c4
;   undefined4 DAT_005c1ab8
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec = 005671e4
;   undefined4 DAT_005c20cc
;   undefined4 DAT_02de5d70
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00564a70
;   crt_startup.c_HandleRuntimeError_FUN_0056ddc0
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_00565c50
;   GetCurrentThreadId
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005711a8
        ;   Label: FUN_005711a8
    PUSH ESI                            ; 005711a9
    PUSH EDI                            ; 005711aa
    PUSH EBP                            ; 005711ab
    CALL dword ptr [0x005c1ae8]         ; 005711ac | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8
    CALL dword ptr CS:[0x575500]        ; 005711b2 | PTR_GetCurrentThreadId_00575500
    MOV EBX,dword ptr [0x02de5d70]      ; 005711b9 | DAT_02de5d70
    TEST EBX,EBX                        ; 005711bf
    JZ 0x005711ce                       ; 005711c1
        ;   XREF to: 005711ce (CONDITIONAL_JUMP)  ; LAB_005711ce
    CMP EAX,dword ptr [EBX + 0x4]       ; 005711c3
        ;   Label: LAB_005711c3
    JZ 0x005711ce                       ; 005711c6
        ;   XREF to: 005711ce (CONDITIONAL_JUMP)  ; LAB_005711ce
    MOV EBX,dword ptr [EBX]             ; 005711c8
    TEST EBX,EBX                        ; 005711ca
    JNZ 0x005711c3                      ; 005711cc
        ;   XREF to: 005711c3 (CONDITIONAL_JUMP)  ; LAB_005711c3
    CMP dword ptr [EBX + 0xc],0x0       ; 005711ce
        ;   Label: LAB_005711ce
    JZ 0x005711fe                       ; 005711d2
        ;   XREF to: 005711fe (CONDITIONAL_JUMP)  ; LAB_005711fe
    MOV EDI,dword ptr [0x005c20cc]      ; 005711d4 | DAT_005c20cc
    PUSH EDI                            ; 005711da
    MOV EBP,dword ptr [EBX + 0x8]       ; 005711db
    PUSH EBP                            ; 005711de
    CALL crt_memory.c_realloc_FUN_00564a70 ; 005711df
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005711e4
    MOV EBP,EAX                         ; 005711e7
    TEST EAX,EAX                        ; 005711e9
    JNZ 0x0057124c                      ; 005711eb
        ;   XREF to: 0057124c (CONDITIONAL_JUMP)  ; LAB_0057124c
    PUSH 0x1                            ; 005711ed
    PUSH 0x59919c                       ; 005711ef | = "Unable to resize thread-specific data..."
    CALL crt_startup.c_HandleRuntimeError_FUN_0056ddc0 ; 005711f4
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_0056ddc0(char * error_message, int error_level)
    ADD ESP,0x8                         ; 005711f9
    JMP 0x0057124c                      ; 005711fc
        ;   XREF to: 0057124c (UNCONDITIONAL_JUMP)  ; LAB_0057124c
    MOV ESI,dword ptr [0x005c20cc]      ; 005711fe | DAT_005c20cc
        ;   Label: LAB_005711fe
    PUSH ESI                            ; 00571204
    PUSH 0x1                            ; 00571205
    CALL crt_unknown.c_FUN_00565c50     ; 00571207
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 0057120c
    MOV EBP,EAX                         ; 0057120f
    TEST EAX,EAX                        ; 00571211
    JNZ 0x00571224                      ; 00571213
        ;   XREF to: 00571224 (CONDITIONAL_JUMP)  ; LAB_00571224
    PUSH 0x1                            ; 00571215
    PUSH 0x5991c4                       ; 00571217 | = "Unable to resize thread-specific data..."
    CALL crt_startup.c_HandleRuntimeError_FUN_0056ddc0 ; 0057121c
        ;   XREF to: 0056ddc0 (UNCONDITIONAL_CALL)  ; void crt_startup.c_HandleRuntimeError_FUN_0056ddc0(char * error_message, int error_level)
    ADD ESP,0x8                         ; 00571221
    MOV ESI,dword ptr [EBX + 0x8]       ; 00571224
        ;   Label: LAB_00571224
    MOV EDI,EBP                         ; 00571227
    MOV ECX,dword ptr [ESI + 0xf0]      ; 00571229
    PUSH ES                             ; 0057122f
    MOV AX,DS                           ; 00571230
    MOV ES,AX                           ; 00571232
    PUSH EDI                            ; 00571234
    MOV EAX,ECX                         ; 00571235
    SHR ECX,0x2                         ; 00571237
    MOVSD.REP ES:EDI,ESI                ; 0057123a
    MOV CL,AL                           ; 0057123c
    AND CL,0x3                          ; 0057123e
    MOVSB.REP ES:EDI,ESI                ; 00571241
    POP EDI                             ; 00571243
    POP ES                              ; 00571244
    MOV dword ptr [EBX + 0xc],0x1       ; 00571245
    MOV dword ptr [EBX + 0x8],EBP       ; 0057124c
        ;   Label: LAB_0057124c
    MOV EAX,[0x005c20cc]                ; 0057124f | DAT_005c20cc
    PUSH EBP                            ; 00571254
    MOV dword ptr [EBP + 0xf0],EAX      ; 00571255
    MOV EAX,[0x005c1ab8]                ; 0057125b | DAT_005c1ab8
    MOV byte ptr [EBP + 0x52],0x1       ; 00571260
    PUSH EAX                            ; 00571264
    MOV byte ptr [EBP + 0x53],0x0       ; 00571265
    CALL dword ptr CS:[0x5755cc]        ; 00571269 | PTR_TlsSetValue_005755cc
    CALL dword ptr [0x005c1aec]         ; 00571270 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec
    MOV EAX,EBP                         ; 00571276
    POP EBP                             ; 00571278
    POP EDI                             ; 00571279
    POP ESI                             ; 0057127a
    POP EBX                             ; 0057127b
    RET                                 ; 0057127c

