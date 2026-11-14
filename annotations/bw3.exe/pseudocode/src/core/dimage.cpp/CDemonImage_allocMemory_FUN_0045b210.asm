; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0045b210(CDemonImage *this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dimage.cpp_FUN_0045b300 at 0045b377
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dimage.cpp_CDemonImage_freeMemory_FUN_0045b270
;   core_main.c_FUN_004e4330
;   crt_memory.c_malloc_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b210
        ;   Label: core_dimage.cpp_CDemonImage_allocMemory_FUN_0045b210
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045b211
    PUSH EBX                            ; 0045b215
    CALL core_dimage.cpp_CDemonImage_freeMemory_FUN_0045b270 ; 0045b216
        ;   XREF to: 0045b270 (UNCONDITIONAL_CALL)  ; void core_dimage.cpp_CDemonImage_freeMemory_FUN_0045b270(CDemonImage * this_ptr)
    MOV EAX,dword ptr [EBX + 0x304]     ; 0045b21b
    IMUL EAX,dword ptr [EBX + 0x308]    ; 0045b221
    ADD ESP,0x4                         ; 0045b228
    PUSH EAX                            ; 0045b22b
    CALL crt_memory.c_malloc_FUN_005a3650 ; 0045b22c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0045b231
    MOV dword ptr [EBX + 0x300],EAX     ; 0045b234
    TEST EAX,EAX                        ; 0045b23a
    JZ 0x0045b240                       ; 0045b23c
        ;   XREF to: 0045b240 (CONDITIONAL_JUMP)  ; LAB_0045b240
    POP EBX                             ; 0045b23e
    RET                                 ; 0045b23f
    PUSH ESI                            ; 0045b240
        ;   Label: LAB_0045b240
    MOV EBX,0x5baff9                    ; 0045b241
    MOV ESI,0x31                        ; 0045b246
    PUSH 0x5bb00c                       ; 0045b24b
    MOV dword ptr [0x01d71de0],EBX      ; 0045b250 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045b256 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045b25c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045b261
    POP ESI                             ; 0045b264
    POP EBX                             ; 0045b265
    RET                                 ; 0045b266

