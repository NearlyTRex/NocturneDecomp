; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004b1820(CGround *this_ptr,int column,int row)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   row
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004b1910 at 004b1cd8
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;
; Called Functions:
;   core_ground.cpp_CGround_getVertexIndex_FUN_004b1800
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1820
        ;   Label: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820
    PUSH ESI                            ; 004b1821
    PUSH EDI                            ; 004b1822
    PUSH EBP                            ; 004b1823
    SUB ESP,0xc                         ; 004b1824
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b1827
    MOV EBP,dword ptr [ESP + 0x24]      ; 004b182b
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b182f
    MOV EDX,EBP                         ; 004b1833
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004b1835
    MOV EDI,dword ptr [ESI + 0x10]      ; 004b1838
    SUB EDX,ECX                         ; 004b183b
    ADD EDX,EDI                         ; 004b183d
    MOV EAX,dword ptr [ESI + 0x30]      ; 004b183f
    PUSH EDX                            ; 004b1842
    MOV EDX,EBX                         ; 004b1843
    MOV ECX,dword ptr [ESI + 0x14]      ; 004b1845
    SUB EDX,EAX                         ; 004b1848
    ADD EDX,ECX                         ; 004b184a
    PUSH EDX                            ; 004b184c
    PUSH ESI                            ; 004b184d
    CALL core_ground.cpp_CGround_getVertexIndex_FUN_004b1800 ; 004b184e
        ;   XREF to: 004b1800 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getVertexIndex_FUN_004b1800(CGround * this_ptr, int column, int row)
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004b1853
    IMUL EDX,EBP                        ; 004b1856
    ADD ESP,0xc                         ; 004b1859
    SHL EDX,0x8                         ; 004b185c
    MOV dword ptr [ESP],EDX             ; 004b185f
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004b1862
    IMUL EDX,EBX                        ; 004b1865
    SHL EDX,0x8                         ; 004b1868
    MOV dword ptr [ESP + 0x8],EDX       ; 004b186b
    MOV EDX,dword ptr [ESI + 0xc]       ; 004b186f
    MOV ECX,dword ptr [ESI]             ; 004b1872
    AND EBX,EDX                         ; 004b1874
    IMUL EBX,ECX                        ; 004b1876
    LEA EDI,[EAX*0x4 + 0x0]             ; 004b1879
    SUB EDI,EAX                         ; 004b1880
    AND EBP,dword ptr [ESI + 0x8]       ; 004b1882
    LEA EDX,[EBX + EBP*0x1]             ; 004b1885
    MOV EBX,dword ptr [ESI + 0x24]      ; 004b1888
    MOVSX EDX,word ptr [EBX + EDX*0x4]  ; 004b188b
    MOV EBX,dword ptr [ESI + 0x20]      ; 004b188f
    IMUL EBX,EDX                        ; 004b1892
    MOV EDX,ESP                         ; 004b1895
    SHL EDI,0x4                         ; 004b1897
    PUSH EDX                            ; 004b189a
    ADD EDI,0x5c5014                    ; 004b189b | DAT_005c5014
    PUSH EDI                            ; 004b18a1
    MOV dword ptr [ESP + 0xc],EBX       ; 004b18a2
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004b18a6
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV dword ptr [EDI + 0x20],0x3fff   ; 004b18ab | DAT_005c5034
    MOV dword ptr [EDI + 0x24],0x3fff   ; 004b18b2 | DAT_005c5038
    ADD ESP,0x8                         ; 004b18b9
    MOV EBX,dword ptr [EDI + 0x8]       ; 004b18bc | DAT_005c501c
    MOV dword ptr [EDI + 0x28],0x3fff   ; 004b18bf | DAT_005c503c
    TEST EBX,EBX                        ; 004b18c6
    JL 0x004b18f2                       ; 004b18c8
        ;   XREF to: 004b18f2 (CONDITIONAL_JUMP)  ; LAB_004b18f2
    MOV EBP,dword ptr [ESI + 0x1c]      ; 004b18ca
    MOV EBX,dword ptr [ESI + 0x10]      ; 004b18cd
    IMUL EBX,EBP                        ; 004b18d0
    MOV EDX,dword ptr [EDI + 0x8]       ; 004b18d3 | DAT_005c501c
    SHL EDX,0x8                         ; 004b18d6
    MOV EAX,EDX                         ; 004b18d9
    SAR EDX,0x1f                        ; 004b18db
    IDIV EBX                            ; 004b18de
    MOV dword ptr [EDI + 0x2c],EAX      ; 004b18e0 | DAT_005c5040
    CMP EAX,0xffff                      ; 004b18e3
    JG 0x004b18fb                       ; 004b18e8
        ;   XREF to: 004b18fb (CONDITIONAL_JUMP)  ; LAB_004b18fb
    ADD ESP,0xc                         ; 004b18ea
        ;   Label: LAB_004b18ea
    POP EBP                             ; 004b18ed
    POP EDI                             ; 004b18ee
    POP ESI                             ; 004b18ef
    POP EBX                             ; 004b18f0
    RET                                 ; 004b18f1
    MOV dword ptr [EDI + 0x2c],0x0      ; 004b18f2 | DAT_005c5040
        ;   Label: LAB_004b18f2
    JMP 0x004b18ea                      ; 004b18f9
        ;   XREF to: 004b18ea (UNCONDITIONAL_JUMP)  ; LAB_004b18ea
    MOV dword ptr [EDI + 0x2c],0xffff   ; 004b18fb | DAT_005c5040
        ;   Label: LAB_004b18fb
    ADD ESP,0xc                         ; 004b1902
    POP EBP                             ; 004b1905
    POP EDI                             ; 004b1906
    POP ESI                             ; 004b1907
    POP EBX                             ; 004b1908
    RET                                 ; 004b1909

