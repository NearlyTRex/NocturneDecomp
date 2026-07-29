; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_00570410(ios *stream_ptr)
;
; Parameters:
; ios *            Stack[0x4]:4   stream_ptr
;
; XREF[1]:
;   crt_iostream.cpp_ios_dtor_FUN_0056b633 at 0056b647
;
; Called Functions:
;   FUN_00571ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570410
        ;   Label: crt_iostream.cpp_ios_freeBufferChain_FUN_00570410
    MOV EAX,dword ptr [ESP + 0x8]       ; 00570411
    MOV EAX,dword ptr [EAX + 0x20]      ; 00570415
    TEST EAX,EAX                        ; 00570418
        ;   Label: LAB_00570418
    JNZ 0x0057041e                      ; 0057041a
        ;   XREF to: 0057041e (CONDITIONAL_JUMP)  ; LAB_0057041e
    POP EBX                             ; 0057041c
    RET                                 ; 0057041d
    PUSH EAX                            ; 0057041e
        ;   Label: LAB_0057041e
    MOV EBX,dword ptr [EAX]             ; 0057041f
    CALL FUN_00571ef0                   ; 00570421
        ;   XREF to: 00571ef0 (UNCONDITIONAL_CALL)  ; void FUN_00571ef0(void * buffer)
    ADD ESP,0x4                         ; 00570426
    MOV EAX,EBX                         ; 00570429
    JMP 0x00570418                      ; 0057042b
        ;   XREF to: 00570418 (UNCONDITIONAL_JUMP)  ; LAB_00570418

