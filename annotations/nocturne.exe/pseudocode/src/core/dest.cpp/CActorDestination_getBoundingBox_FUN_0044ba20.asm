; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_dest_cpp_CActorDestination_getBoundingBox_FUN_0044ba20(CActorDestination *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ba20
        ;   Label: core_dest.cpp_CActorDestination_getBoundingBox_FUN_0044ba20
    PUSH EBP                            ; 0044ba21
    SUB ESP,0x18                        ; 0044ba22
    MOV EAX,dword ptr [ESP + 0x24]      ; 0044ba25
    MOV EBX,dword ptr [ESP + 0x28]      ; 0044ba29
    MOV EDX,dword ptr [EAX + 0x150]     ; 0044ba2d
    TEST EDX,EDX                        ; 0044ba33
    JNZ 0x0044ba94                      ; 0044ba35
        ;   XREF to: 0044ba94 (CONDITIONAL_JUMP)  ; LAB_0044ba94
    PUSH ESI                            ; 0044ba37
    MOV ESI,0xbdcccccd                  ; 0044ba38
    MOV ECX,0xbf800000                  ; 0044ba3d
    MOV EBP,0x3f800000                  ; 0044ba42
    MOV EAX,0x40066666                  ; 0044ba47
    MOV dword ptr [ESP + 0x8],ESI       ; 0044ba4c
    MOV dword ptr [ESP + 0xc],ECX       ; 0044ba50
    MOV dword ptr [ESP + 0x10],EBP      ; 0044ba54
    MOV dword ptr [ESP + 0x14],EAX      ; 0044ba58
    MOV dword ptr [ESP + 0x18],EBP      ; 0044ba5c
    MOV dword ptr [ESP + 0x4],ECX       ; 0044ba60
    MOV dword ptr [EBX],ECX             ; 0044ba64
    LEA EDX,[EBX + 0x4]                 ; 0044ba66
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044ba69
    MOV dword ptr [EDX],EAX             ; 0044ba6d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044ba6f
    MOV dword ptr [EDX + 0x4],EAX       ; 0044ba73
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044ba76
    MOV dword ptr [EDX + 0x8],EAX       ; 0044ba7a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044ba7d
    MOV dword ptr [EDX + 0xc],EAX       ; 0044ba81
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044ba84
    MOV dword ptr [EDX + 0x10],EAX      ; 0044ba88
    POP ESI                             ; 0044ba8b
    MOV EAX,EBX                         ; 0044ba8c
    ADD ESP,0x18                        ; 0044ba8e
    POP EBP                             ; 0044ba91
    POP EBX                             ; 0044ba92
    RET                                 ; 0044ba93
    PUSH EBX                            ; 0044ba94
        ;   Label: LAB_0044ba94
    MOV EAX,EDX                         ; 0044ba95
    PUSH EAX                            ; 0044ba97
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0044ba98
    CALL dword ptr [EDX + 0x14]         ; 0044ba9e
    ADD ESP,0x8                         ; 0044baa1
    MOV EAX,EBX                         ; 0044baa4
    ADD ESP,0x18                        ; 0044baa6
    POP EBP                             ; 0044baa9
    POP EBX                             ; 0044baaa
    RET                                 ; 0044baab

