; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60(int *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0 at 0044b1ba
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ab60
        ;   Label: core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60
    PUSH ESI                            ; 0044ab61
    SUB ESP,0x28                        ; 0044ab62
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044ab65
    MOV EBX,dword ptr [ESP + 0x38]      ; 0044ab69
    MOV EDX,0x3                         ; 0044ab6d
    XOR ECX,ECX                         ; 0044ab72
    MOV dword ptr [ESP + 0x4],EDX       ; 0044ab74
    MOV dword ptr [ESP + 0x14],ECX      ; 0044ab78
    MOV dword ptr [ESP + 0x10],ECX      ; 0044ab7c
    MOV dword ptr [ESP + 0xc],ECX       ; 0044ab80
    MOV dword ptr [ESP + 0x8],ECX       ; 0044ab84
    MOV ECX,0xc                         ; 0044ab88
    MOV EAX,dword ptr [ESI]             ; 0044ab8d
    XOR EDX,EDX                         ; 0044ab8f
    SUB EAX,EBX                         ; 0044ab91
    DIV ECX                             ; 0044ab93
    MOV dword ptr [ESP + 0x18],EAX      ; 0044ab95
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044ab99
    XOR EDX,EDX                         ; 0044ab9c
    SUB EAX,EBX                         ; 0044ab9e
    DIV ECX                             ; 0044aba0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044aba2
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044aba6
    XOR EDX,EDX                         ; 0044aba9
    SUB EAX,EBX                         ; 0044abab
    DIV ECX                             ; 0044abad
    PUSH 0x1                            ; 0044abaf
    MOV dword ptr [ESP + 0x24],EAX      ; 0044abb1
    LEA EAX,[ESP + 0x4]                 ; 0044abb5
    PUSH EAX                            ; 0044abb9
    MOV EDX,dword ptr [0x005be368]      ; 0044abba | DAT_005be368
    PUSH EDX                            ; 0044abc0 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40 ; 0044abc1
        ;   XREF to: 0050df40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count)
    ADD ESP,0xc                         ; 0044abc6
    ADD ESP,0x28                        ; 0044abc9
    POP ESI                             ; 0044abcc
    POP EBX                             ; 0044abcd
    RET                                 ; 0044abce

