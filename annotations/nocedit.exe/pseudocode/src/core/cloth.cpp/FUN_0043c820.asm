; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cloth.cpp_FUN_0043c820()
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_0065bb3c
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_cloth.cpp_FUN_0043c6e0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c820
        ;   Label: core_cloth.cpp_FUN_0043c820
    SUB ESP,0xc                         ; 0043c821
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043c824
    MOV EBX,ESP                         ; 0043c828
    MOV EDX,dword ptr [0x006703ec]      ; 0043c82a | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0043c830
    FMUL float ptr [0x0065bb3c]         ; 0043c832 | DAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043c838
    FLD float ptr [EAX + 0x4]           ; 0043c83a
    FMUL float ptr [0x0065bb3c]         ; 0043c83d | DAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043c843
    FLD float ptr [EAX + 0x8]           ; 0043c846
    FMUL float ptr [0x0065bb3c]         ; 0043c849 | DAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043c84f
    MOV EBX,ESP                         ; 0043c852
    MOV EDX,dword ptr [EDX]             ; 0043c854 | g_CDemonRendererInstance
    PUSH EBX                            ; 0043c856
    ADD EDX,0xea5d0                     ; 0043c857
    PUSH EDX                            ; 0043c85d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0043c85e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0043c863
    PUSH 0x4e1f                         ; 0043c866
    CALL core_cloth.cpp_FUN_0043c6e0    ; 0043c86b
        ;   XREF to: 0043c6e0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c6e0()
    ADD ESP,0x4                         ; 0043c870
    ADD ESP,0xc                         ; 0043c873
    POP EBX                             ; 0043c876
    RET                                 ; 0043c877

