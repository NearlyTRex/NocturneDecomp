; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408b40(CDemonActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00408b40
        ;   Label: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408b40
    SUB ESP,0x18                        ; 00408b41
    MOV EAX,ESI                         ; 00408b44
    MOV ESI,0x40800000                  ; 00408b46
    MOV EDI,0x41000000                  ; 00408b4b
    XOR ECX,ECX                         ; 00408b50
    MOV EDX,0xc0800000                  ; 00408b52
    MOV dword ptr [ESP + 0x4],ECX       ; 00408b57
    MOV dword ptr [ESP + 0xc],ESI       ; 00408b5b
    MOV dword ptr [ESP + 0x10],EDI      ; 00408b5f
    MOV dword ptr [ESP + 0x14],ESI      ; 00408b63
    MOV ECX,0x6                         ; 00408b67
    MOV ESI,ESP                         ; 00408b6c
    MOV EDI,EAX                         ; 00408b6e
    MOV dword ptr [ESP + 0x8],EDX       ; 00408b70
    MOV dword ptr [ESP],EDX             ; 00408b74
    MOVSD.REP ES:EDI,ESI                ; 00408b77
    ADD ESP,0x18                        ; 00408b79
    POP EDI                             ; 00408b7c
    RET                                 ; 00408b7d

