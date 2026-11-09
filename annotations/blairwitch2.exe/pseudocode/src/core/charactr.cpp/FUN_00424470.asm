; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00424470(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[38]:
;   core_baron.cpp_FUN_0040f950 at 0040faeb
;   core_batcreat.cpp_FUN_00411a10 at 00411c43
;   core_batman.cpp_FUN_00412f40 at 00413194
;   core_beast.cpp_FUN_00414a80 at 00414ae3
;   core_biggs.cpp_FUN_00414e50 at 00415035
;   core_boneguy.cpp_FUN_004186c0 at 00418ccc
;   core_colonel.cpp_FUN_00435830 at 00435ae4
;   core_cow.cpp_FUN_004392b0 at 004394e7
;   core_doc.cpp_FUN_00450c60 at 004513ee
;   core_dog.cpp_FUN_0045e360 at 0045e5f9
;   ... and 28 more
;
; Called Functions:
;   core_charactr.cpp_FUN_00429d60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00424470
        ;   Label: core_charactr.cpp_FUN_00424470
    PUSH EDI                            ; 00424471
    SUB ESP,0xc                         ; 00424472
    MOV EAX,dword ptr [ESP + 0x18]      ; 00424475
    MOV EDI,ESP                         ; 00424479
    LEA ESI,[EAX + 0x30]                ; 0042447b
    MOV EDX,ESP                         ; 0042447e
    MOVSD ES:EDI,ESI                    ; 00424480
    MOVSD ES:EDI,ESI                    ; 00424481
    MOVSD ES:EDI,ESI                    ; 00424482
    PUSH EDX                            ; 00424483
    FLD float ptr [ESP + 0x8]           ; 00424484
    FADD float ptr [EAX + 0x2578]       ; 00424488
    PUSH EAX                            ; 0042448e
    FSTP float ptr [ESP + 0xc]          ; 0042448f
    MOV dword ptr [EAX + 0x2578],0x0    ; 00424493
    CALL core_charactr.cpp_FUN_00429d60 ; 0042449d
        ;   XREF to: 00429d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429d60()
    ADD ESP,0x8                         ; 004244a2
    ADD ESP,0xc                         ; 004244a5
    POP EDI                             ; 004244a8
    POP ESI                             ; 004244a9
    RET                                 ; 004244aa

