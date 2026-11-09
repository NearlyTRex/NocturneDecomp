; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; int              Stack[0xc]:4   gather_count
; float            Stack[0x10]:4   spawn_rate
; CVector3f *      Stack[0x14]:4   box_size
;
; XREF[9]:
;   core_actor.cpp_FUN_00409c00 at 00409c2a
;   core_colonel.cpp_FUN_004451c0 at 004452a6
;   core_doc.cpp_FUN_004737b0 at 00473a04
;   core_gabriela.cpp_FUN_004cab10 at 004cac4e
;   core_haystack.cpp_FUN_004ea140 at 004ea240
;   core_icepick.cpp_FUN_004f2570 at 004f26b6
;   core_scat.cpp_FUN_00541c70 at 00541d56
;   core_stranger.cpp_FUN_0058fcb0 at 0058fe8d
;   core_svetlana.cpp_FUN_005944c0 at 005945df
;
; Called Functions:
;   core_gore.cpp_FUN_004e63e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e64d0
        ;   Label: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
    PUSH ESI                            ; 004e64d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e64d2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e64d6
    PUSH EDX                            ; 004e64da
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e64db
    PUSH dword ptr [ESP + 0x1c]         ; 004e64df
    PUSH ECX                            ; 004e64e3
    LEA EAX,[EBX + 0x20]                ; 004e64e4
    PUSH EAX                            ; 004e64e7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e64e8
    PUSH ESI                            ; 004e64ec
    CALL core_gore.cpp_FUN_004e63e0     ; 004e64ed
        ;   XREF to: 004e63e0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004e63e0()
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004e64f2
    MOV dword ptr [EAX + 0x2c],EDX      ; 004e64f5
    ADD ESP,0x14                        ; 004e64f8
    MOV dword ptr [EAX + 0x2a08],EBX    ; 004e64fb
    POP ESI                             ; 004e6501
    POP EBX                             ; 004e6502
    RET                                 ; 004e6503

