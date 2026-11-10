; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00412990(CBatCreature *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_007bc74c
;
; Called Functions:
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412990
        ;   Label: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00412990
    PUSH ESI                            ; 00412991
    PUSH EDI                            ; 00412992
    PUSH EBP                            ; 00412993
    SUB ESP,0x18                        ; 00412994
    MOV EBX,dword ptr [ESP + 0x30]      ; 00412997
    MOV EDX,dword ptr [0x007bc74c]      ; 0041299b | DAT_007bc74c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004129a1
    PUSH EDX                            ; 004129a5
    ADD EAX,0x2b4                       ; 004129a6
    MOV EBP,0x1                         ; 004129ab
    PUSH EAX                            ; 004129b0
    LEA ESI,[ESP + 0x8]                 ; 004129b1
    LEA EDI,[ESP + 0x14]                ; 004129b5
    CALL core_skeleton.cpp_FUN_00546a90 ; 004129b9
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    LEA ESI,[ESP + 0x8]                 ; 004129be
    ADD ESP,0x8                         ; 004129c2
    LEA EAX,[ESP + 0xc]                 ; 004129c5
    MOVSD ES:EDI,ESI                    ; 004129c9
    MOVSD ES:EDI,ESI                    ; 004129ca
    MOVSD ES:EDI,ESI                    ; 004129cb
    CMP EBX,EAX                         ; 004129cc
    JNZ 0x004129da                      ; 004129ce
        ;   XREF to: 004129da (CONDITIONAL_JUMP)  ; LAB_004129da
    MOV EAX,EBP                         ; 004129d0
    ADD ESP,0x18                        ; 004129d2
    POP EBP                             ; 004129d5
    POP EDI                             ; 004129d6
    POP ESI                             ; 004129d7
    POP EBX                             ; 004129d8
    RET                                 ; 004129d9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004129da
        ;   Label: LAB_004129da
    MOV dword ptr [EBX],EAX             ; 004129de
    MOV EAX,dword ptr [ESP + 0x10]      ; 004129e0
    MOV dword ptr [EBX + 0x4],EAX       ; 004129e4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004129e7
    MOV dword ptr [EBX + 0x8],EAX       ; 004129eb
    MOV EAX,EBP                         ; 004129ee
    ADD ESP,0x18                        ; 004129f0
    POP EBP                             ; 004129f3
    POP EDI                             ; 004129f4
    POP ESI                             ; 004129f5
    POP EBX                             ; 004129f6
    RET                                 ; 004129f7

