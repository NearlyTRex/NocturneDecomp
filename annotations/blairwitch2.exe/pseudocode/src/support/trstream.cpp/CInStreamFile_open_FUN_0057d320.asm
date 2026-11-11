; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamFile_open_FUN_0057d320(CInStreamFile *this_ptr,LPCSTR param_2)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; LPCSTR           Stack[0x8]:4   param_2
;
; XREF[3]:
;   core_game.cpp_FUN_004bb9b0 at 004bbc94
;   core_game.cpp_FUN_004bbf70 at 004bc21f
;   unkaddr_0057b9a0.cpp_CInStreamFile_ctorOpen_FUN_0057cdb0 at 0057ce0b
;
; Referenced Globals:
;   void* PTR_CreateFileA_005c8518 = 001c8c64
;   void* PTR_GetFileSize_005c8590 = 001c8e9a
;
; Called Functions:
;   CreateFileA
;   GetFileSize
;   support_trstream.cpp_FUN_0057d1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d320
        ;   Label: support_trstream.cpp_CInStreamFile_open_FUN_0057d320
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057d321
    PUSH EBX                            ; 0057d325
    MOV EAX,dword ptr [EBX]             ; 0057d326
    CALL dword ptr [EAX + 0x24]         ; 0057d328
    ADD ESP,0x4                         ; 0057d32b
    PUSH 0x0                            ; 0057d32e
    PUSH 0x0                            ; 0057d330
    PUSH 0x3                            ; 0057d332
    PUSH 0x0                            ; 0057d334
    PUSH 0x1                            ; 0057d336
    PUSH 0x80000000                     ; 0057d338
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057d33d
    PUSH EDX                            ; 0057d341
    MOV dword ptr [EBX + 0x10],0x0      ; 0057d342
    CALL dword ptr CS:[0x5c8518]        ; 0057d349 | PTR_CreateFileA_005c8518
    MOV dword ptr [EBX + 0x4],EAX       ; 0057d350
    TEST EAX,EAX                        ; 0057d353
    JNZ 0x0057d359                      ; 0057d355
        ;   XREF to: 0057d359 (CONDITIONAL_JUMP)  ; LAB_0057d359
    POP EBX                             ; 0057d357
    RET                                 ; 0057d358
    PUSH 0x0                            ; 0057d359
        ;   Label: LAB_0057d359
    PUSH EAX                            ; 0057d35b
    CALL dword ptr CS:[0x5c8590]        ; 0057d35c | PTR_GetFileSize_005c8590
    MOV dword ptr [EBX + 0x8],EAX       ; 0057d363
    TEST EAX,EAX                        ; 0057d366
    JL 0x0057d37a                       ; 0057d368
        ;   XREF to: 0057d37a (CONDITIONAL_JUMP)  ; LAB_0057d37a
    PUSH EBX                            ; 0057d36a
    CALL support_trstream.cpp_FUN_0057d1d0 ; 0057d36b
        ;   XREF to: 0057d1d0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d1d0()
    MOV EAX,0x1                         ; 0057d370
    ADD ESP,0x4                         ; 0057d375
    POP EBX                             ; 0057d378
    RET                                 ; 0057d379
    PUSH EBX                            ; 0057d37a
        ;   Label: LAB_0057d37a
    MOV EAX,dword ptr [EBX]             ; 0057d37b
    CALL dword ptr [EAX + 0x24]         ; 0057d37d
    ADD ESP,0x4                         ; 0057d380
    XOR EAX,EAX                         ; 0057d383
    POP EBX                             ; 0057d385
    RET                                 ; 0057d386

