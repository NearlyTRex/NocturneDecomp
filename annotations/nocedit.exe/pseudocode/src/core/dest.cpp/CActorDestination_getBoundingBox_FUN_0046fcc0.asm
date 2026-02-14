; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoundingBox3D * __cdecl core_dest_cpp_CActorDestination_getBoundingBox_FUN_0046fcc0(CActorDestination *this_ptr,CBoundingBox3D *out_box)
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

    PUSH EBX                            ; 0046fcc0
        ;   Label: core_dest.cpp_CActorDestination_getBoundingBox_FUN_0046fcc0
    PUSH EBP                            ; 0046fcc1
    SUB ESP,0x18                        ; 0046fcc2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046fcc5
    MOV EBX,dword ptr [ESP + 0x28]      ; 0046fcc9
    MOV EDX,dword ptr [EAX + 0x158]     ; 0046fccd
    TEST EDX,EDX                        ; 0046fcd3
    JNZ 0x0046fd34                      ; 0046fcd5
        ;   XREF to: 0046fd34 (CONDITIONAL_JUMP)  ; LAB_0046fd34
    PUSH ESI                            ; 0046fcd7
    MOV ESI,0xbdcccccd                  ; 0046fcd8
    MOV ECX,0xbf800000                  ; 0046fcdd
    MOV EBP,0x3f800000                  ; 0046fce2
    MOV EAX,0x40066666                  ; 0046fce7
    MOV dword ptr [ESP + 0x8],ESI       ; 0046fcec
    MOV dword ptr [ESP + 0xc],ECX       ; 0046fcf0
    MOV dword ptr [ESP + 0x10],EBP      ; 0046fcf4
    MOV dword ptr [ESP + 0x14],EAX      ; 0046fcf8
    MOV dword ptr [ESP + 0x18],EBP      ; 0046fcfc
    MOV dword ptr [ESP + 0x4],ECX       ; 0046fd00
    MOV dword ptr [EBX],ECX             ; 0046fd04
    LEA EDX,[EBX + 0x4]                 ; 0046fd06
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046fd09
    MOV dword ptr [EDX],EAX             ; 0046fd0d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046fd0f
    MOV dword ptr [EDX + 0x4],EAX       ; 0046fd13
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046fd16
    MOV dword ptr [EDX + 0x8],EAX       ; 0046fd1a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046fd1d
    MOV dword ptr [EDX + 0xc],EAX       ; 0046fd21
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046fd24
    MOV dword ptr [EDX + 0x10],EAX      ; 0046fd28
    POP ESI                             ; 0046fd2b
    MOV EAX,EBX                         ; 0046fd2c
    ADD ESP,0x18                        ; 0046fd2e
    POP EBP                             ; 0046fd31
    POP EBX                             ; 0046fd32
    RET                                 ; 0046fd33
    PUSH EBX                            ; 0046fd34
        ;   Label: LAB_0046fd34
    MOV EAX,EDX                         ; 0046fd35
    PUSH EAX                            ; 0046fd37
    MOV EDX,dword ptr [EDX + 0x154]     ; 0046fd38
    CALL dword ptr [EDX + 0x14]         ; 0046fd3e
    ADD ESP,0x8                         ; 0046fd41
    MOV EAX,EBX                         ; 0046fd44
    ADD ESP,0x18                        ; 0046fd46
    POP EBP                             ; 0046fd49
    POP EBX                             ; 0046fd4a
    RET                                 ; 0046fd4b

