; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408910(CDemonActor *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00408910
        ;   Label: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408910
    SUB ESP,0x18                        ; 00408911
    MOV EAX,ESI                         ; 00408914
    MOV ESI,0x40800000                  ; 00408916
    MOV EDI,0x41000000                  ; 0040891b
    XOR ECX,ECX                         ; 00408920
    MOV EDX,0xc0800000                  ; 00408922
    MOV dword ptr [ESP + 0x4],ECX       ; 00408927
    MOV dword ptr [ESP + 0xc],ESI       ; 0040892b
    MOV dword ptr [ESP + 0x10],EDI      ; 0040892f
    MOV dword ptr [ESP + 0x14],ESI      ; 00408933
    MOV ECX,0x6                         ; 00408937
    MOV ESI,ESP                         ; 0040893c
    MOV EDI,EAX                         ; 0040893e
    MOV dword ptr [ESP + 0x8],EDX       ; 00408940
    MOV dword ptr [ESP],EDX             ; 00408944
    MOVSD.REP ES:EDI,ESI                ; 00408947
    ADD ESP,0x18                        ; 00408949
    POP EDI                             ; 0040894c
    RET                                 ; 0040894d

