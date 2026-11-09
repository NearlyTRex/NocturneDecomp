; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004c9cc0(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   gather_count
; float            Stack[0x10]:4   spawn_rate
; CVector3f *      Stack[0x14]:4   box_size
;
; XREF[9]:
;   core_actor.cpp_FUN_00409db0 at 00409dda
;   core_colonel.cpp_FUN_004364a0 at 00436586
;   core_gabriela.cpp_FUN_004b1bf0 at 004b1d2e
;   core_haystack.cpp_FUN_004cd880 at 004cd980
;   core_icepick.cpp_FUN_004d6370 at 004d64b6
;   core_scat.cpp_FUN_0051fb40 at 0051fc26
;   core_stranger.cpp_FUN_0056d060 at 0056d23d
;   core_svetlana.cpp_FUN_00571870 at 0057198f
;   unkafter_stranger.cpp_FUN_0045b190 at 0045b36d
;
; Called Functions:
;   core_gore.cpp_FUN_004c9bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9cc0
        ;   Label: core_gore.cpp_FUN_004c9cc0
    PUSH ESI                            ; 004c9cc1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c9cc2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c9cc6
    PUSH EDX                            ; 004c9cca
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c9ccb
    PUSH dword ptr [ESP + 0x1c]         ; 004c9ccf
    PUSH ECX                            ; 004c9cd3
    LEA EAX,[EBX + 0x20]                ; 004c9cd4
    PUSH EAX                            ; 004c9cd7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004c9cd8
    PUSH ESI                            ; 004c9cdc
    CALL core_gore.cpp_FUN_004c9bd0     ; 004c9cdd
        ;   XREF to: 004c9bd0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004c9bd0()
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004c9ce2
    MOV dword ptr [EAX + 0x2c],EDX      ; 004c9ce5
    ADD ESP,0x14                        ; 004c9ce8
    MOV dword ptr [EAX + 0x2b64],EBX    ; 004c9ceb
    POP ESI                             ; 004c9cf1
    POP EBX                             ; 004c9cf2
    RET                                 ; 004c9cf3

