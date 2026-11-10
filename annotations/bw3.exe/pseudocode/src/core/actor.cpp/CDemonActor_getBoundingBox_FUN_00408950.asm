; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408950(CDemonActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00408950
        ;   Label: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408950
    SUB ESP,0x18                        ; 00408951
    MOV EAX,ESI                         ; 00408954
    MOV ESI,0x40800000                  ; 00408956
    MOV EDI,0x41000000                  ; 0040895b
    XOR ECX,ECX                         ; 00408960
    MOV EDX,0xc0800000                  ; 00408962
    MOV dword ptr [ESP + 0x4],ECX       ; 00408967
    MOV dword ptr [ESP + 0xc],ESI       ; 0040896b
    MOV dword ptr [ESP + 0x10],EDI      ; 0040896f
    MOV dword ptr [ESP + 0x14],ESI      ; 00408973
    MOV ECX,0x6                         ; 00408977
    MOV ESI,ESP                         ; 0040897c
    MOV EDI,EAX                         ; 0040897e
    MOV dword ptr [ESP + 0x8],EDX       ; 00408980
    MOV dword ptr [ESP],EDX             ; 00408984
    MOVSD.REP ES:EDI,ESI                ; 00408987
    ADD ESP,0x18                        ; 00408989
    POP EDI                             ; 0040898c
    RET                                 ; 0040898d

